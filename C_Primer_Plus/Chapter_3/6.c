/* The mass of a single molecule of water is about 3.0×10 -23 grams. A quart of water is
 * about 950 grams. Write a program that requests an amount of water, in quarts, and
 * displays the number of water molecules in that amount. */

#include <stdio.h>

int	main(void)
{
	const double	SINGLE_MOLECULE = 3.0e-23;
	const double	QUART_GRAMS = 950;
	double	water_quarts;
	double	total_grams;
	double	num_molecules;

	printf("Enter an amount of water (in quarts):\n");
	scanf("%lf", &water_quarts);
	total_grams = water_quarts * QUART_GRAMS;
	num_molecules = total_grams / SINGLE_MOLECULE;
	printf("%.2f quarts of water contains approximately %.2e water molecules.\n", water_quarts, num_molecules);
	return (0);
}
