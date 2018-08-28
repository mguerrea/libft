#include "libft.h"

char	*ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

    if (s)
    {
		if(!(str = ft_strnew(ft_strlen((char *)s))))
			return (NULL);
    	i = -1;
        while (++i < ft_strlen((char *)s))
            str[i] = f(i, s[i]);
    }
	return (str);
}