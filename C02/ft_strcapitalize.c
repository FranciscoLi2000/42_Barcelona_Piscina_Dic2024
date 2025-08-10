
int	ft_isalnum(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;	/* 第一个字母肯定要判定成新单词 */
	while (str[i])
	{
		if (ft_isupper(str[i]))
			str[i] = ft_tolower(str[i]);
		if (ft_isalnum(str[i]))
		{
			if (new_word && ft_islower(str[i]))
				str[i] = ft_toupper(str[i]);
			new_word = 0;
		}
		else
			new_word = 1;
		i++;
	}
	return (str);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", ft_strcapitalize(argv[1]));
	return (0);
}
