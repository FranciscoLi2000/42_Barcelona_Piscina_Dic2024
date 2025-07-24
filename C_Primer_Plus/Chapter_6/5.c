/* Have a program request the user to enter an uppercase letter. Use nested loops to produce
 * a pyramid pattern like this:
 * 	A
 *     ABA
 *    ABCBA
 *   ABCDCBA
 *  ABCDEDCBA
 * The pattern should extend to the character entered. For example, the preceding pattern
 * would result from an input value of E . Hint: Use an outer loop to handle the rows. Use
 * three inner loops in a row, one to handle the spaces, one for printing letters in ascending
 * order, and one for printing letters in descending order. If your system doesn’t use ASCII
 * or a similar system that represents letters in strict number order, see the suggestion in
 * programming exercise 3. */

#include <stdio.h>

int	main(void)
{
	char	input;
	int	rows;
	int	i;
	int	j;

	printf("Enter an uppercase letter:\n");
	scanf("%c", &input);
	rows = input - 'A' + 1;
	i = 0;
	while (i < rows)
	{
		j = 0;
		while (j < rows - i - 1)
		{
			printf(" ");
			j++;
		}
		j = 0;
		while (j <= i)
		{
			printf("%c", 'A' + j);
			j++;
		}
		j = i - 1;
		while (j >= 0)
		{
			printf("%c", 'A' + j);
			j--;
		}
		printf("\n");
		i++;
	}
	return (0);
}
