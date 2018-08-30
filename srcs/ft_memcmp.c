#include "libft.h"

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t          i;
    unsigned char   *tmp1;
    unsigned char   *tmp2;

    tmp1 = (unsigned char *)s1;
    tmp2 = (unsigned char *)s2;
    i = 0;
    while (i < n)
    {
        if (tmp1[i] != tmp2[i])
            return (tmp1[i] - tmp2[i]);
        i++;
    }
    return (0);
}