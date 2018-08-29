#include "libft.h"

void    ft_putchar_color(char c, char *color)
{
	if (ft_strcmp(color, "red") == 0)
		write(1, "\x1B[31m", 5);
	if (ft_strcmp(color, "blue") == 0)
		write(1, "\x1B[34m", 5);
	if (ft_strcmp(color, "green") == 0)
		write(1, "\x1B[32m", 5);
	if (ft_strcmp(color, "yellow") == 0)
		write(1, "\x1B[33m", 5);
	write(1, &c, 1);
	write(1, "\x1B[0m", 4);
}