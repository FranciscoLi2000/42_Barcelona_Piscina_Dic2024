/* Write a program that reads eight integers into an array and then prints them in reverse
 * order. */

#include <stdio.h>

int	main(void)
{
	int	arr[8];
	int	i;

	printf("Enter eight integers:\n");
	for (i = 0; i < 8; i++)
		scanf("%d", &arr[i]);
	printf("Numbers in reverse order:\n");
	for (i = 7; i >= 0; i--)
		printf("%d ", arr[i]);
	printf("\n");
	return (0);
}
