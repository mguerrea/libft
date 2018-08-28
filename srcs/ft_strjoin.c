#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	size_t len;
	size_t i;

	if (s1 && s2)
	{
		len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
		if (!(str = ft_strnew(len)))
			return (NULL);
		i = -1;
		while (s1[++i])
			str[i] = s1[i];
		i--;
		while (++i < len)
			str[i] = s2[i - ft_strlen((char *)s1)];
		return (str);
	}
	else
		return (NULL);
}