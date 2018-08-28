#include "libft.h"

char *ft_strtrim(char const *s)
{
	char *str;
	size_t i;
	size_t j;
	size_t k;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	j = ft_strlen((char *)s) - 1;
	while ((s[j] == ' ' || s[j] == '\n' || s[j] == '\t') && j > i)
		j--;
	if (!(str = ft_strnew(j - i + 1)))
		return (NULL);
	k = -1;
	while (++k < j - i + 1)
		str[k] = s[i + k];
	return (str);
}