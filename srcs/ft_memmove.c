#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t  i;
    char    *temp;
    char    *dest2;
    char    *src2;

    i = 0;
    if (!(temp = (char *)malloc(sizeof(char) * n)))
        return (NULL);
    src2 = (char *)src;
    while (i < n)
    {
        temp[i] = src2[i];
        i++;
    }
    i = 0;
    dest2 = (char *)dest;
    while (i < n)
    {
        dest2[i] = temp[i];
        i++;
    }
    return (dest);
}