/* Write a program that requests your height in inches and your name, and then displays
 * the information in the following form:
 * Dabney, you are 6.208 feet tall
 * Use type float , and use / for division. If you prefer, request the height in centimeters
 * and display it in meters. */

#include <stdio.h>

int	main(void)
{
	float	height_inch;
	char	name[20];

	printf("Enter your height in inches:\n");
	scanf("%f", &height_inch);
	printf("Enter your name:\n");
	scanf("%s", name);
	printf("%s, you are %.3f feet tall\n", name, height_inch / 12.0);
	return (0);
}
