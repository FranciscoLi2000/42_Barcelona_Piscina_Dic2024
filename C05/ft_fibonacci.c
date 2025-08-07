
int	ft_fibonacci(int index)
{
	int	a;
	int	b;
	int	temp;
	int	i;

	a = 0;
	b = 1;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	i = 2;
	while (i <= index)
	{
		temp = a + b;
		a = b;
		b = temp;
		i++;
	}
	return (b);
}

#include <stdio.h>

int	main(void)
{
	int	i;

	i = 0;
	while (i <= 10)
	{
		printf("Fibonacci(%d) = %d\n", i, ft_fibonacci(i));
		i++;
	}
	return (0);
}
