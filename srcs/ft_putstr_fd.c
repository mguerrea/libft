#include "libft.h"

void	ft_putstr_fd(const char *str, int fd)
{
	int i;

	if (str)
	{
		i = 0;
		while (str[i] != '\0')
		{
			write(fd, &str[i], 1);
			i++;
		}
	}
}