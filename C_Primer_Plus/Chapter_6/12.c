/* Consider these two infinite series:
 * 1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...
 * 1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...
 * 
 * Write a program that evaluates running totals of these two series up to some limit of number of terms.
 *
 * Hint: –1 times itself an odd number of times is –1, and –1 times itself an even number of times is 1.
 *
 * Have the user enter the limit interactively; let a zero or negative value terminate input.
 *
 * Look at the running totals after 100 terms, 1000 terms, 10,000 terms.
 *
 * Does either series appear to be converging to some value? */

#include <stdio.h>
#include <math.h>

int	main(void)
{
	int	terms;
	int	i;
	double	harmonic_series;
	double	alternating_series;

	printf("Enter the number of terms:\n");
	scanf("%i", &terms);
	while (terms > 0)
	{
		harmonic_series = 0.0;
		alternating_series = 0.0;
		for (i = 1; i <= terms; i++)
		{
			/* 调和级数（第一个级数） */
			harmonic_series += 1.0 / i;
			/* 交错调和级数（第二个级数） */
			alternating_series += pow(-1, i + 1) / i;
		}
		printf("For %d terms:\n", terms);
		printf("Harmonic series sum: %.15f\n", harmonic_series);
		printf("Alternating harmonic series sum: %.15f\n\n", alternating_series);
		printf("Enter another number of terms:\n");
		scanf("%i", &terms);
	}
	return (0);
}
