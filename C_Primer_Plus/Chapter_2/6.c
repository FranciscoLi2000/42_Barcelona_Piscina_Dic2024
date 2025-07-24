/* Write a program that creates an integer variable called toes . Have the program set toes
 * to 10 . Also have the program calculate what twice toes is and what toes squared is. The
 * program should print all three values, identifying them. */

#include <stdio.h>

int	main(void)
{
	int	toes;

	toes = 10;
	printf("toes is %i\n", toes);
	printf("twice toes is %i\n", toes * 2);
	printf("toes square is %i\n", toes * toes);
	return (0);
}
