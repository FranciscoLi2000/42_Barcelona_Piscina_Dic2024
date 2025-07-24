/* Write a program that creates an eight-element array of int s and sets the elements to the
 * first eight powers of 2 and then prints the values. Use a for loop to set the values, and,
 * for variety, use a do while loop to display the values */

#include <stdio.h>

int	main(void)
{
	int	arr[8];
	int	j;

	arr[0] = 1;
	for (int i = 1; i < 8; i++)
		arr[i] = arr[i - 1] * 2;
	j = 0;
	do
	{
		printf("%i ", arr[j]);
		j++;
	}
	while (j < 8);
	printf("\n");
	return (0);
}
