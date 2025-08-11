#include <stdio.h>
#include <string.h>

int	reverse_cmp(char *a, char *b)
{
	return (-strcmp(a, b));
}

void	ft_sort_string_tab(char **tab)
{
	char	*tmp;
	int		i;
	int		j;
	int		len;

	len = 0;
	while (tab[len])
		len++;
	i = 0;
	while (i < len - 1)
	{
		j = 0;
		while (j < len - 1 - i)
		{
			if (strcmp(tab[j], tab[j + 1]) > 0)
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	char	*tmp;
	int		i;
	int		j;
	int		len;

	len = 0;
	while (tab[len])
		len++;
	i = 0;
	while (i < len - 1)
	{
		j = 0;
		while (j < len - 1 - i)
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	char	*arr1[] = {"banana", "apple", "cherry", NULL};
	char	*arr2[] = {"banana", "apple", "cherry", NULL};
	int	i;

	ft_sort_string_tab(arr1);
	ft_advanced_sort_string_tab(arr2, reverse_cmp);

	printf("ft_sort_string_tab TEST\n");
	i = 0;
	while (arr1[i])
	{
		printf("%s\t", arr1[i]);
		i++;
	}
	printf("\n");
	printf("ft_advanced_sort_string_tab TEST\n");
	i = 0;
	while (arr2[i])
	{
		printf("%s\t", arr2[i]);
		i++;
	}
	printf("\n");
	return (0);
}
