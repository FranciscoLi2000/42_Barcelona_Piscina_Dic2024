
int	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	if (*b == 0)
		return (-1);
	tmp = *a / *b;
	*b = *a % *b;
	*a = tmp;
	return (0);
}
