/* Write a program that prints a table with each line giving an integer, its square, and its
 * cube. Ask the user to input the lower and upper limits for the table. Use a for loop */

#include <stdio.h>

int	main(void)
{
	int	lower;
	int	upper;

	printf("Enter the lower:\n");
	scanf("%i", &lower);
	printf("Enter the upper:\n");
	scanf("%i", &upper);
	for (int i = lower; i <= upper; i++)
		printf("Number: %i, Square: %i, Cube: %i\n", i, i * i, i * i * i);
	return (0);
}
