/* Write a program that asks the user to enter a height in centimeters and then displays the
 * height in centimeters and in feet and inches. Fractional centimeters and inches should
 * be allowed, and the program should allow the user to continue entering heights until a
 * nonpositive value is entered. A sample run should look like this:
 * Enter a height in centimeters: 182
 * 182.0 cm = 5 feet, 11.7 inches
 * Enter a height in centimeters (<=0 to quit): 168.7
 * 168.0 cm = 5 feet, 6.4
 * inches
 * Enter a height in centimeters (<=0 to quit): 0
 * bye */

#include <stdio.h>

int	main(void)
{
	double	height;

	printf("Enter a height in CM:\n");
	scanf("%lf", &height);
	while (height > 0)
	{
		double total_inches = height / 2.54;
		int feet = (int)(total_inches / 12);
		double remaining_inches = total_inches - (feet * 12);
		printf("%.1f cm = %d feet, %.1f inches\n", height, feet, remaining_inches);
		printf("Enter a height in centimeters (<=0 to quit):\n");
		scanf("%lf", &height);
	}
	printf("bye\n");
	return (0);
}
