#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*res;
	int		len;

	len = ft_strlen(src);
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	
}
