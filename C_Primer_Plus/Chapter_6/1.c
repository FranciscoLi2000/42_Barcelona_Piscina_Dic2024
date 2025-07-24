/* Write a program that creates an array with 26 elements and stores the 26 lowercase
 * letters in it. Also have it show the array contents. */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

int	main(void)
{
	char	arr[27];
	int	i;

	i = 0;
	while (i < 26)
	{
		arr[i] = 'a' + i;
		i++;
	}
	arr[26] = '\0';
	ft_putstr(arr);
	ft_putchar('\n');
	return (0);
}
