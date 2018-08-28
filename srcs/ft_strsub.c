#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *str;
	size_t i;

	if (s)
	{
		if (!(str = ft_strnew(len)))
			return (NULL);
		i = -1;
		while (++i < len)
			str[i] = s[start + i];
		return (str);
	}
	else
		return (NULL);
}