#include <stdio.h>
#include <stdlib.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	compare(const void *a, const void *b)
{
	return (ft_strcmp(*(const char**)a, *(const char**)b));
}

int	main(int argc, char **argv)
{
	char	**args;
	int		num_args;
	int		i;

	/* Check if there are arguments to sort (excluding argv[0]) */
	if (argc <= 1)
		return (0);
	/* Create array of pointers to arguments (excluding argv[0]) */
	args = &argv[1];
	num_args = argc - 1;
	/* Sort the arguments using qsort with strcmp comparison */
	qsort(args, num_args, sizeof(char*), compare);
	/* Display sorted arguments, one per line */
	i = 0;
	while (i < num_args)
	{
		printf("%s\n", args[i]);
		i++;
	}
	return (0);
}
