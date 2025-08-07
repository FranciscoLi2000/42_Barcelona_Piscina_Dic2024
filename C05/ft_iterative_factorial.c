
int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fac;

	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	i = 1;
	fac = 1;
	while (i <= nb)
	{
		fac *= i;
		i++;
	}
	return (fac);
}

#include <stdio.h>

int	main(void)
{
	int	n;

	printf("Enter a number:\n");
	scanf("%i", &n);
	printf("%i\n", ft_iterative_factorial(n));
	return (0);
}
