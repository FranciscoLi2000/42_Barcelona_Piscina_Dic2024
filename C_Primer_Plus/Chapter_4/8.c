/* Write a program that asks the user to enter the number of miles traveled and the number
 * of gallons of gasoline consumed. It should then calculate and display the miles-per-gallon
 * value, showing one place to the right of the decimal. Next, using the fact that one gallon
 * is about 3.785 liters and one mile is about 1.609 kilometers, it should convert the mile-
 * per-gallon value to a liters-per-100-km value, the usual European way of expressing fuel
 * consumption, and display the result, showing one place to the right of the decimal. Note
 * that the U. S. scheme measures the distance traveled per amount of fuel (higher is better),
 * whereas the European scheme measures the amount of fuel per distance (lower is better).
 * Use symbolic constants (using const or #define ) for the two conversion factors. */

#include <stdio.h>

const float GALLONS_TO_LITERS = 3.785;
const float MILES_TO_KILOMETERS = 1.609;

int	main(void)
{
	float	miles;
	float	gallons;
	float	mpg;
	float	liters_per_100km;

	printf("Enter the number of miles traveled:\n");
	scanf("%f", &miles);
	printf("Enter the number of gallons of gasoline consumed:\n");
	scanf("%f", &gallons);
	mpg = miles / gallons;
	printf("\nFuel efficiency:\n");
	printf("Miles per gallon: %.1f miles per gallon\n", mpg);
	float kilometers = miles * MILES_TO_KILOMETERS;
	float liters = gallons * GALLONS_TO_LITERS;
	liters_per_100km = (liters / kilometers) * 100.0;
	printf("Liters per 100 kilometers: %.1f L/100km\n", liters_per_100km);
	return (0);
}
