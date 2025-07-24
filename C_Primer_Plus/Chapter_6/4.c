/* Use nested loops to produce the following pattern:
 * A
 * BC
 * DEF
 * GHIJ
 * KLMNO
 * PQRSTU
 *
 * If your system doesn’t encode letters in numeric order, see the suggestion in
 * programming exercise 3. */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char	c = 'A';
	int	i;
	int	j;

	i = 1;
	while (i <= 6)
	{
		j = 0;
		while (j < i)
		{
			ft_putchar(c);
			c++;
			j++;
		}
		printf("\n");
		i++;
	}
	return (0);
}
