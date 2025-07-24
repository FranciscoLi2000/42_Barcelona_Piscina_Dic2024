/* Write a program that requests two floating-point numbers and prints the value of their
 * difference divided by their product. Have the program loop through pairs of input values
 * until the user enters nonnumeric input. */

#include <stdio.h>

int	main(void)
{
	float	num1;
	float	num2;

	printf("Enter two floating-point numbers:\n");
	while (1)
	{
		if (scanf("%f %f", &num1, &num2))
		{
			if (num1 > num2)
			{
				printf("Result: %.2f\n", (float)((num1 - num2) / (num1 * num2)));
			}
			else if (num1 < num2)
			{
				printf("Result: %.2f\n", (float)((num2 - num1) / (num1 * num2)));
			}
		}
		else
		{
			printf("Bye\n");
			break ;
		}
	}
	return (0);
}
