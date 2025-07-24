/* Write a program that uses one printf() call to print your first name and last name on
 * one line, uses a second printf() call to print your first and last names on two separate
 * lines, and uses a pair of printf() calls to print your first and last names on one line.
 * The output should look like this (but using your name):
 * Gustav Mahler First print statement
 * Gustav Second print statement
 * Mahler Still the second print statement
 * Gustav Mahler Third and fourth print statements */

#include <stdio.h>

int	main(void)
{
	printf("Yufeng Li\n");
	printf("Yufeng\nLi\n");
	printf("Yufeng ");
	printf("Li\n");
	return (0);
}
