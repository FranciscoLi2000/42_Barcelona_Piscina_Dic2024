#include <stdio.h>

int	has_a(char *str)
{
	while (*str)
	{
		if (*str == 'a')
			return (1);
		str++;
	}
	return (0);
}

int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i])
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}

int	main(void)
{
	char	*words[] = {"Hello, ", "World", "Name", NULL};
	int	n;

	n = ft_count_if(words, 4, &has_a);
	printf("%i word has letter a.\n", n);
	return (0);
}
