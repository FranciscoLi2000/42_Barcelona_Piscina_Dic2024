/* Write a program that asks you to enter an ASCII code value, such as 66, and then prints
 * the character having that ASCII code. */

#include <stdio.h>

int	main(void)
{
	int	num;

	printf("Enter an ASCII code value:\n");
	scanf("%i", &num);
	printf("The character is %c\n", num);
	return (0);
}
