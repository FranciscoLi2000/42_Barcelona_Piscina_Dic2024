#include <stdio.h>

int	cmp_int(int x, int y)
{
	if (x < y)
		return (-1);
	else if (x == y)
		return (0);
	else
		return (1);
}

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	int	arr[] = {1, 2, 3, 4, 5};

	if (ft_is_sort(arr, 5, &cmp_int) == 1)
		printf("This is a sorted array.\n");
	else
		printf("Not sorted.\n");
	return (0);
}
