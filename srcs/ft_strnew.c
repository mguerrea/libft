#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;

	if(!(str = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_bzero(str, size);
	str[size] = '\0';
	return (str);
}