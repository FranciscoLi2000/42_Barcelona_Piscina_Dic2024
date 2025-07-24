/* There are 2.54 centimeters to the inch. Write a program that asks you to enter your
 * height in inches and then displays your height in centimeters. Or, if you prefer, ask for
 * the height in centimeters and convert that to inches. */

#include <stdio.h>

int	main(void)
{
	const double	CM_TO_INCH = 2.54;
	double		height_cm;

	printf("Enter your height in cm:\n");
	scanf("%lf", &height_cm);
	printf("Height: %.2lf inches\n", height_cm / CM_TO_INCH);

	return (0);
}
