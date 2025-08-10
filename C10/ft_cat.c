#include <unistd.h>
#include <fcntl.h>

#define ERR_MSG_1 "File name missing.\n"
#define ERR_MSG_2 "Too many arguments.\n"
#define ERR_MSG_3 "Cannot read file.\n"

#define BUFFER_SIZE (29 * 1024)

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	fd;
	char	buffer[BUFFER_SIZE];
	ssize_t	bytes_read;

	if (argc < 2)
	{
		ft_putstr_fd(ERR_MSG_1, 2);
		return (1);
	}
	else if (argc > 2)
	{
		ft_putstr_fd(ERR_MSG_2, 2);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr_fd(ERR_MSG_3, 2);
		return (1);
	}
	while ((bytes_read = read(fd, buffer, sizeof(buffer))) > 0)
		write(1, buffer, bytes_read);
	if (bytes_read == -1)
	{
		ft_putstr_fd(ERR_MSG_3, 2);
		close(fd);
		return (1);
	}
	close(fd);
	return (0);
}
