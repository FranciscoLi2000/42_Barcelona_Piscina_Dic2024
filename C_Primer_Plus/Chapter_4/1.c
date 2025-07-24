/* Write a program that asks for your first name, your last name, and then prints the names
 * in the format last, first . */

#include <stdio.h>

int	main(void)
{
	char	fname[10];
	char	lname[10];

	printf("Enter your first name:\n");
	scanf("%s", fname);
	printf("Enter your last name:\n");
	scanf("%s", lname);
	printf("Name: %s, %s\n", lname, fname);
	return (0);
}
