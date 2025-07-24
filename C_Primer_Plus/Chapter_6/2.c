/* Use nested loops to produce the following pattern:
 * $
 * $$
 * $$$
 * $$$$
 * $$$$$ */

#include <stdio.h>

int	main(void)
{
	int	i;
	int	j;

	i = 1;
	while (i <= 5)
	{
		j = 0;
		while (j < i)
		{
			printf("$");
			j++;
		}
		printf("\n");
		i++;
	}
	return (0);
}
