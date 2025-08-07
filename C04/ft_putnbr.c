#include <unistd.h>
#include <limits.h>

void	ft_putstr(char *str);

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == INT_MIN)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	else if (nb > 9)
		ft_putnbr(nb / 10);
	else
	{
		c = nb % 10;
		write(1, &c, 1);
	}
}
