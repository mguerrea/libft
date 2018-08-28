#include "libft.h"

 char *ft_strchr(char *str, int c)
 {
	 int i;

	 i = 0;
	 if (c == '\0')
	 {
		while (str[i])
		 	i++;
		return(str + i);
	 }
	 while (str[i] != '\0')
	 {
		if (str[i] == c)
			return (&str[i]);
		i++;
	 }
	 return (NULL);
 }