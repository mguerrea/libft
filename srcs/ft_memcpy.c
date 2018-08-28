#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t  i;
	char	*s1;
	char	*s2;

	i = 0;
	s1 = (char *)dest;
	s2 = (char *)src;
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (dest);
}