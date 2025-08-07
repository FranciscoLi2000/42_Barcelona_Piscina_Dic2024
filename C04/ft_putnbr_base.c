#include <unistd.h>
#include <limits.h>

void	ft_putstr(char *str);
int	ft_strlen(char *str);

void	ft_putnbr_base(int nb, char *base)
{
	char	c;
	int	base_len;

	base_len = ft_strlen(base);
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
		ft_putnbr(nb / base_len);
	else
	{
		c = nb % base_len;
		write(1, &c, 1);
	}
}
