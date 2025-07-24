/* There are approximately 3.156 × 10 7 seconds in a year. Write a program that requests
 * your age in years and then displays the equivalent number of seconds. */

#include <stdio.h>

int	main(void)
{
	const double	SECONDS_PER_YEAR = 3.156e7;
	int	age;
	double		total_seconds;

	printf("Enter your age in years:\n");
	scanf("%i", &age);
	total_seconds = age * SECONDS_PER_YEAR;
	printf("You have lived approximately %.0f seconds.\n", total_seconds);
	printf("In scientific notation: %.3e seconds.\n", total_seconds);
	return (0);
}
