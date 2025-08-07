
int	ft_strlen(char *str);

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	long	res;
	int	base_len;

	base_len = ft_strlen(base);
	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * base_len + (str[i] - '0');
		i++;
	}
	return ((int)res * sign);
}
