/* Use nested loops to produce the following pattern:
 * F
 * FE
 * FED
 * FEDC
 * FEDCB
 * FEDCBA
 * Note: If your system doesn’t use ASCII or some other code that encodes letters in
 * numeric order, you can use the following to initialize a character array to the letters of
 * the alphabet:
 * char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 * Then you can use the array index to select individual letters; for example, lets[0] is
 * 'A' , and so on. */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char	c = 'F';
	int	i;
	int	j;

	i = 1;
	while (i <= 6)
	{
		j = 0;
		while (j < i)
		{
			ft_putchar(c - j);
			j++;
		}
		printf("\n");
		i++;
	}
	return (0);
}
