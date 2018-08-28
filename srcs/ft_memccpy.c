#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t      	i;
	unsigned char	*s1;
    unsigned char	*s2;

    i = 0;
	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
    while (i < n)
	{
		s1[i] = s2[i];
		if (s2[i] == (unsigned char)c)
			return ((void *)(s1 + i + 1));
		i++;
	}
	return (NULL);
}