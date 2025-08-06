
int	ft_strlen(char *s);

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;

	if (size == 0)
		return ((unsigned int)ft_strlen((char *)src));
	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return ((unsigned int)ft_strlen((char *)src));
}
