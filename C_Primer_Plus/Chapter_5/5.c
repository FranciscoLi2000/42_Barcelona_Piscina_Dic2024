/* Change the program addemup.c ( Listing 5.13 ), which found the sum of the first 20
 * integers. (If you prefer, you can think of addemup.c as a program that calculates how
 * much money you get in 20 days if you receive $1 the first day, $2 the second day, $3 the
 * third day, and so on.) Modify the program so that you can tell it interactively how far
 * the calculation should proceed. That is, replace the 20 with a variable that is read in. */

#include <stdio.h>

int	main(void)
{
	int	count;
	int	sum;
	int	limit;

	count = 0;
	sum = 0;
	printf("Enter the number to sum up to:\n");
	scanf("%d", &limit);
	if (limit <= 0)
	{
		printf("Please enter a positive number.\n");
		return (1);
	}
	while (count++ < limit)
		sum = sum + count;
	printf("The sum of integers from 1 to %d is: %d\n", limit, sum);
	printf("(This equals %d * %d / 2 = %d using the formula n(n+1)/2)\n", 
			           limit, limit + 1, limit * (limit + 1) / 2);
	return (0);
}
