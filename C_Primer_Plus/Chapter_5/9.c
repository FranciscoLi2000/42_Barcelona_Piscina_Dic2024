/* Write a program that requests the user to enter a Fahrenheit temperature. The program
 * should read the temperature as a type double number and pass it as an argument to
 * a user-supplied function called Temperatures() . This function should calculate the
 * Celsius equivalent and the Kelvin equivalent and display all three temperatures with a
 * precision of two places to the right of the decimal. It should identify each value with the
 * temperature scale it represents. Here is the formula for converting Fahrenheit to Celsius:
 * Celsius = 5.0 / 9.0 * (Fahrenheit - 32.0)
 * The Kelvin scale, commonly used in science, is a scale in which 0 represents absolute
 * zero, the lower limit to possible temperatures. Here is the formula for converting Celsius
 * to Kelvin:
 * Kelvin = Celsius + 273.16
 * The Temperatures() function should use const to create symbolic representations of
 * the three constants that appear in the conversions. The main() function should use
 * a loop to allow the user to enter temperatures repeatedly, stopping when a q or other
 * nonnumeric value is entered. Use the fact that scanf() returns the number of items
 * read, so it will return 1 if it reads a number, but it won’t return 1 if the user enters q . The
 * == operator tests for equality, so you can use it to compare the return value of scanf()
 * with 1  */

#include <stdio.h>

void	Temperatures(double fahren)
{
	const double CELSIUS_FACTOR = 5.0 / 9.0;
	const double FREEZING_OFFSET = 32.0;
	const double KELVIN_OFFSET = 273.16;
	double	celsius;
	double	kelvin;

	celsius = CELSIUS_FACTOR * (fahren - FREEZING_OFFSET);
	kelvin = celsius + KELVIN_OFFSET;
	printf("Fahrenheit = %.2f\n", fahren);
	printf("Celsius = %.2f\n", celsius);
	printf("Kelvin = %.2f\n", kelvin);
	printf("\n");
}

int	main(void)
{
	double	fahr;
	int	scanf_result;

	printf("Temperature Conversion Program\n");
	printf("Enter Fahrenheit temperatures (enter 'q' to quit):\n\n");
	while (1)
	{
		printf("Enter a Fahrenheit temperature:\n");
		scanf_result = scanf("%lf", &fahr);
		if (scanf_result == 1)
			Temperatures(fahr);
		else
		{
			printf("Exiting program. Goodbye!\n");
			break ;
		}
	}
	return (0);
}
