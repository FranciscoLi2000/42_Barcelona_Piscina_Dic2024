/* Write a program that reads a single word into a character array and then prints the word
 * backward. Hint: Use strlen() ( Chapter 4 ) to compute the index of the last character in
 * the array. */

#include <stdio.h>
#include <string.h>

char	*ft_strrev(char *s)
{
	char	tmp;
	int	len;
	int	i;

	len = strlen(s);
	i = 0;
	if (len > 0 && s[len - 1] == '\n')
	{
		s[len - 1] = '\0';
		len--;
	}
	while (i < len / 2)
	{
		tmp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = tmp;
		i++;
	}
	return (s);
}

int	main(void)
{
	char	str[60];

	printf("Enter a word:\n");
	if (fgets(str, 60, stdin) != NULL)
	{
		printf("Original: %s", str);
		printf("Reverse: %s\n", ft_strrev(str));
	}
	else
	{
		printf("Error\n");
	}
	return(0);
}
