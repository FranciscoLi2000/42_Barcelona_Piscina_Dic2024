/* Write a program that creates two eight-element arrays of double s and uses a loop to let
 * the user enter values for the eight elements of the first array. Have the program set the
 * elements of the second array to the cumulative totals of the elements of the first array.
 * For example, the fourth element of the second array should equal the sum of the first
 * four elements of the first array, and the fifth element of the second array should equal
 * the sum of the first five elements of the first array. (It’s possible to do this with nested
 * loops, but by using the fact that the fifth element of the second array equals the fourth
 * element of the second array plus the fifth element of the first array, you can avoid
 * nesting and just use a single loop for this task.) Finally, use loops to display the contents
 * of the two arrays, with the first array displayed on one line and with each element of the
 * second array displayed below the corresponding element of the first array. */

#include <stdio.h>

int	main(void)
{
	double	arr_A[8];
	double	arr_B[8];
	double	sum;

	sum = 0.0;
	printf("Enter eight double values for the A array:\n");
	for (int i = 0; i < 8; i++)
		scanf("%lf", &arr_A[i]);
	for (int i = 0; i < 8; i++)
	{
		sum += arr_A[i];
		arr_B[i] = sum;
	}
	printf("The first array:\n");
	for (int i = 0; i < 8; i++)
		printf("%lf ", arr_A[i]);
	printf("\nThe second array:\n");
	for (int i = 0; i < 8; i++)
		printf("%lf ", arr_B[i]);
	printf("\n");
	return (0);
}
