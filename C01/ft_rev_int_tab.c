
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[size - 1 - i];
		tab[size - 1 - i] = tab[i];
		tab[i] = tmp;
		i++;
	}
}

#include <stdio.h>

int	main(void)
{
	int	arr[] = {1, 2, 3, 4, 5, 6, 7};
	int	i;

	i = 0;
	printf("ORIGINAL\n");
	while (i < 7)
	{
		printf("%i ", arr[i]);
		i++;
	}
	ft_rev_int_tab(arr, 7);
	printf("\nREVERSED\n");
	i = 0;
	while (i < 7)
	{
		printf("%i ", arr[i]);
		i++;
	}
	printf("\n");
	return (0);
}
