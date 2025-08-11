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

int	ft_any(char **tab, int(*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
	{
		if (f(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}

int	main(void)
{
	char	*words[] = {"Hello, ", "World", "NAME", NULL};

	if (ft_any(words, &has_a))
		printf("At least one word has letter a.\n");
	else
		printf("None string has letter a.\n");
	return (0);
}
