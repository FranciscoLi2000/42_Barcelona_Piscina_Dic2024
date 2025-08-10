#include <stdlib.h>

typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}	t_stock_str;

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dst, char *src)
{
	int	i;

	i = 0;
	while (dst[i] && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*res;
	int	i;

	res = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		res[i].size = ft_strlen(av[i]);
		res[i].str = av[i];
		res[i].copy = (char *)malloc((res[i].size + 1) * sizeof(char));
		if (!res[i].copy)
		{
			while (i-- > 0)
				free(res[i].copy);
			free(res);
			return (NULL);
		}
		ft_strcpy(res[i].copy, av[i]);
		i++;
	}
	res[ac].str = NULL;
	res[ac].copy = NULL;
	res[ac].size = 0;
	return (res);
}
