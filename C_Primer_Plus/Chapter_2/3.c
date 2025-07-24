/* Write a program that converts your age in years to days and displays both values. At this
point, don’t worry about fractional years and leap years. */

#include <stdio.h>

int	main(void)
{
	int	age;

	printf("Enter your age:\n");
	scanf("%i", &age);
	printf("You (age: %i) have lived in this world %i days.\n", age, age * 365);
	return (0);
}
