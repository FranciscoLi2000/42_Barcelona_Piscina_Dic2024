/* In the U.S. system of volume measurements, a pint is 2 cups, a cup is 8 ounces, an
 * ounce is 2 tablespoons, and a tablespoon is 3 teaspoons. Write a program that requests a
 * volume in cups and that displays the equivalent volumes in pints, ounces, tablespoons,
 * and teaspoons. Why does a floating-point type make more sense for this application than
 * an integer type? */

#include <stdio.h>

int	main(void)
{
	float	cup;

	printf("Enter a volume in cups:\n");
	scanf("%f", &cup);
	printf("%.2f cups = %.2f pints\n", cup, cup / 2);
	printf("%.2f cups = %.2f ounces\n", cup, cup * 8);
	printf("%.2f cups = %.2f tablespoons\n", cup, cup * 8 * 2);
	printf("%.2f cups = %.2f teaspoons\n", cup, cup * 8 * 2 * 3);
	return (0);
}
