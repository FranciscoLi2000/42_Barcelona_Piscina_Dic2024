#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest + i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;
	int		sep_len;
	int		i;
	char	*result;
	char	*current_pos;

	if (size == 0)
	{
		result = malloc(1);
		if (result)
			result[0] = '\0';
		return (result);
	}
	total_len = 0;
	sep_len = ft_strlen(sep);
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	total_len += sep_len * (size - 1);
	total_len += 1;
	result = malloc(total_len * sizeof(char));
	if (!result)
		return (NULL);
	current_pos = result;
	i = 0;
	while (i < size)
	{
		current_pos = ft_strcpy(current_pos, strs[i]);
		if (i < size - 1)
			current_pos = ft_strcpy(current_pos, sep);
		i++;
	}
	*current_pos = '\0';
	return (result);
}
