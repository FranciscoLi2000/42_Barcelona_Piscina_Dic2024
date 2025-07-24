/* Now modify the program of Programming Exercise 5 so that it computes the sum of the
 * squares of the integers. (If you prefer, how much money you receive if you get $1 the
 * first day, $4 the second day, $9 the third day, and so on. This looks like a much better
 * deal!) C doesn’t have a squaring function, but you can use the fact that the square of n is
 * n * n  */

#include <stdio.h>

int	main(void)
{
	int	count;
	int	sum;
	int	limit;

	printf("Enter how many terms to sum (sum of squares from 1^2 to n^2):\n");
	scanf("%d", &limit);
	if (limit <= 0)
	{
		printf("Please enter a positive number.\n");
		return (1);
	}
	count = 1;
	sum = 0;
	while (count <= limit)
	{
		int square = count * count;
		sum = sum + square;
		printf("Adding %d^2 = %d, sum is now %d\n", count, square, sum);
		count++;
	}
	printf("\nThe sum of squares from 1^2 to %d^2 is: %d\n", limit, sum);
	int formula_result = limit * (limit + 1) * (2 * limit + 1) / 6;
	printf("(Using the formula n(n+1)(2n+1)/6 = %d)\n", formula_result);
	printf("\nIn money terms: You'd receive $%d total if you got:\n", sum);
	printf("$1 on day 1, $4 on day 2, $9 on day 3, ..., $%d on day %d\n", limit * limit, limit);
	return (0);
}
