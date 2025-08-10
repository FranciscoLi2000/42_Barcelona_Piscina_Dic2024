
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

#include <stdio.h>

int	main(void)
{
	int	arr[] = {9, 2, 7, 1, 8, 4, 3};
	int	i;

	i = 0;
	printf("ORIGINAL\n");
	while (i < 7)
	{
		printf("%i ", arr[i]);
		i++;
	}
	ft_sort_int_tab(arr, 7);
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
