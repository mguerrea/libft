int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != 0 && s2[i] != 0 && i < n)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}