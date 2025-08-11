#include <stdlib.h>

int	ft_square(int n)
{
	return (n * n);
}

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		tab[i] = f(tab[i]);
		i++;
	}
	return (tab);
}

#include <stdio.h>

int	main(void)
{
	int	*arr;
	int	size;
	int	i;

	printf("How many numbers you want to put into the array?\n");
	scanf("%i", &size);
	arr = malloc(size * sizeof(int));
	if (!arr)
		return (1);
	printf("Original:\n");
	i = 0;
	while (i < size)
	{
		printf("Enter the numbers in the array:\n");
		scanf("%i", &arr[i]);
		i++;
	}
	printf("\n");
	arr = ft_map(arr, size, &ft_square);
	i = 0;
	while (i < size)
	{
		printf("%i ", arr[i]);
		i++;
	}
	printf("\n");
	return (0);
}
