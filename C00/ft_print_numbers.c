#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int	i;

	i = 0;
	while (i <= 10)
	{
		ft_putchar((char)i);
		i++;
	}
	ft_putchar('\n');
}
