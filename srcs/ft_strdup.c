#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*copy;

	i = 0;
	while (src[i] != '\0')
		i++;
	if(!(copy = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}