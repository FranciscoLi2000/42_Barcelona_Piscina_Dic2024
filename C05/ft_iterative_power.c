#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;
	int	positive_power;

	result = 1;
	if (nb == 0 && power == 0)
	{
		printf("Undefined. Using 1 as default.\n");
		return (1);
	}
	if (nb == 0 && power > 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0)
		positive_power = power;
	else
		positive_power = -power;
	i = 0;
	while (i < positive_power)
	{
		result *= nb;
		i++;
	}
	if (power < 0)
		return (1 / result);
	else
		return (result);
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
		xpow = ft_iterative_power(x, exp);
		printf("%i to the power %i is %i\n", x, exp, xpow);
		printf("Enter next pair of numbers or q to quit.\n");
	}
	printf("Hope you enjoyed this power trip -- bye!\n");
	return (0);
}
