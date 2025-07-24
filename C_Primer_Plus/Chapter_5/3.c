/* Write a program that asks the user to enter the number of days and then converts that
 * value to weeks and days. For example, it would convert 18 days to 2 weeks, 4 days.
 * Display results in the following format:
 * 18 days are 2 weeks, 4 days.
 * Use a while loop to allow the user to repeatedly enter day values; terminate the loop
 * when the user enters a nonpositive value, such as 0 or -20 . */

#include <stdio.h>

int	main(void)
{
	int	days;

	printf("Enter the number of days:\n");
	scanf("%i", &days);
	while (days > 0)
	{
		printf("%i days to ", days);
		printf("%i weeks, ", days / 7);
		printf("%i days\n", days % 7);
		printf("Enter another number of days (nonpositive number to quit):\n");
		scanf("%i", &days);
	}
	return (0);
}
