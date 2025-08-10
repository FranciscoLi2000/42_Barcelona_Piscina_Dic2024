#include <unistd.h>

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	
	(void)argc;
	ft_putstr(argv[0]);
	write(1, "\n", 1);
	return (0);
}
