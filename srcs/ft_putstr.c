#include "libft.h"

void	ft_putstr(const char *str)
{
	int i;

	if (str)
	{
		i = 0;
		while (str[i] != '\0')
		{
			write(1, &str[i], 1);
			i++;
		}
	}
}