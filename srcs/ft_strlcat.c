#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	if (size < ft_strlen(dest) + 1)
		return (ft_strlen(src) + size);
	while (dest[i] != '\0' && i < size)
		i++;
	j = 0;
	if (size > ft_strlen(dest) + 1)
	{
		while (src[j] != '\0' && i < size - 1)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src) + ft_strlen(dest));
}