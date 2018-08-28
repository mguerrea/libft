#include "libft.h"

void ft_striter(char *s, void (*f)(char *))
{
    unsigned int i;

    i = -1;
    if (s)
    {
        while (++i < ft_strlen(s))
            f(&s[i]);
    }
}