#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_comb_recursive(char *comb, int n, int index, int start)
{
	int	i;
	int	digit;

	if (index == n)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(comb[i]);
			i++;
		}
		if (comb[0] != '0' + 10 - n)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		return ;
	}
	digit = start;
	while (digit <= 9)
	{
		comb[index] = '0' + digit;
		print_comb_recursive(comb, n, index + 1, digit + 1);
		digit++;
	}
}

void	ft_print_combn(int n)
{
	char	comb[10];

	if (n <= 0 || n >= 10)
		return ;
	print_comb_recursive(comb, n, 0, 0);
	ft_putchar('\n');
}

int	main(void)
{
	int	nb;

	printf("Enter a number for the variable n:\n");
	scanf("%i", &nb);
	ft_print_combn(nb);
	return (0);
}
