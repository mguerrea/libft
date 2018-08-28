#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char			*str;

	str = NULL;
    if (s)
    {
		if(!(str = ft_strnew(ft_strlen((char *)s))))
			return (NULL);
    	i = -1;
        while (++i < ft_strlen((char *)s))
            str[i] = f(s[i]);
    }
	return (str);
}