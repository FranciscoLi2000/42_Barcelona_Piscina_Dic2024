/* Daphne invests $100 at 10% simple interest.
 * (That is, every year, the investment earns an interest equal to 10% of the original investment.)
 *
 * Deirdre invests $100 at 5% interest compounded annually.
 * (That is, interest is 5% of the current balance, including previous addition of interest.)
 *
 * Write a program that finds how many years it takes for the value of Deirdre’s investment to exceed the value of Daphne’s investment.
 * Also show the two values at that time */

#include <stdio.h>

const double DAPHNE_INTEREST = 0.1;
const double DEIRDRE_INTEREST = 0.05;

int	main(void)
{
	double	daphne;
	double	deirdre;
	int	count;

	count = 0;
	daphne = deirdre = 100;
	while (deirdre <= daphne)
	{
		daphne += 100 * DAPHNE_INTEREST;
		deirdre += deirdre * DEIRDRE_INTEREST;
		count++;
	}
	printf("After %i years, ", count);
	printf("Daphne has %.2lf dollars, ", daphne);
	printf("Deirdre has %.2lf dollars.\n", deirdre);
	return (0);
}
