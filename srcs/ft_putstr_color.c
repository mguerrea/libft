#include "libft.h"

void    ft_putstr_color(char *str, char *color)
{
    if (ft_strcmp(color, "red") == 0)
		write(1, "\x1B[31m", 5);
	if (ft_strcmp(color, "blue") == 0)
		write(1, "\x1B[34m", 5);
	if (ft_strcmp(color, "green") == 0)
		write(1, "\x1B[32m", 5);
	if (ft_strcmp(color, "yellow") == 0)
		write(1, "\x1B[33m", 5);
	ft_putstr(str);
	write(1, "\x1B[0m", 4);
}