/* Chuckie Lucky won a million dollars (after taxes), which he places in an account that
 * earns 8% a year. On the last day of each year, Chuckie withdraws $100,000. Write a
 * program that finds out how many years it takes for Chuckie to empty his account. */

#include <stdio.h>

const double INTEREST_PER_YEAR = 0.08;
const double WITHDRAW_PER_YEAR = 100000.0;

int	main(void)
{
	double	principal;
	int	count;

	principal = 1000000.0;
	count = 0;
	while (principal > 0)
	{
		principal += principal * INTEREST_PER_YEAR;
		principal -= WITHDRAW_PER_YEAR;
		count++;
	}
	printf("After %i years, ", count);
	printf("Chunkie will empty his account.\n");
	return (0);
}
