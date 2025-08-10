#include <stdlib.h>

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*res;
	size_t	len;
	size_t	i;

	if (!src)
		return (NULL);
	len = ft_strlen(src);
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
