/* Write a program that requests a type double number and prints the value of the number
 * cubed. Use a function of your own design to cube the value and print it. The main()
 * program should pass the entered value to this function. */

#include <stdio.h>

double	cube(double n)
{
	return (n * n * n);
}

int	main(void)
{
	double	num;

	printf("Enter a double number:\n");
	scanf("%lf", &num);
	printf("The result = %lf\n", cube(num));
	return (0);
}
