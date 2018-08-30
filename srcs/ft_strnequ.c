#include "libft.h"

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!s1 || !s2)
		return (0);
	if (ft_strlen(s1) < n || ft_strlen(s2) < n)
		if (ft_strlen(s1) != ft_strlen(s2))
			return (0);
	while (*s1 && *s2 && n--)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}
	return (1);
}