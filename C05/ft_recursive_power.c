#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	half;

	if (power == 0)
		return (1);
	if (power < 0)
		return (1 / ft_recursive_power(nb, -power));
	if (power % 2 == 0)
	{
		half = ft_recursive_power(nb, power / 2);
		return (half * half);
	}
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

int	main(void)
{
	int	x;
	int	xpow;
	int	exp;

	printf("Enter a number and the positive integer power to which the number will be raised.\n");
	printf("Enter q to quit.\n");
	while (scanf("%i %i", &x, &exp) == 2)
	{
		xpow = ft_recursive_power(x, exp);
		printf("%i to the power %i is %i\n", x, exp, xpow);
		printf("Enter next pair of numbers or q to quit.\n");
	}
	printf("Hope you enjoyed this power trip -- bye!\n");
	return (0);
}
