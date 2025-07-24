/* Write a program that converts time in minutes to time in hours and minutes. Use
 * #define or const to create a symbolic constant for 60. Use a while loop to allow the
 * user to enter values repeatedly and terminate the loop if a value for the time of 0 or less
 * is entered. */

#include <stdio.h>
#define HOUR_TO_MIN 60

int	main(void)
{
	int	minutes;

	printf("Enter time in minutes:\n");
	scanf("%i", &minutes);
	while (minutes > 0)
	{
		printf("Time: %i hours, ", minutes / HOUR_TO_MIN);
		printf("%i minutes\n", minutes % HOUR_TO_MIN);
		printf("You can enter a time if you input 0 or negative number you can quit\n");
		scanf("%i", &minutes);
	}
	return (0);
}
