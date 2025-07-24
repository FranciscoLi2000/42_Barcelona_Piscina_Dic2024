#include <stdio.h>

float	calculate(float n1, float n2);

int	main(void)
{
	float	num1;
	float	num2;

	printf("Enter two floating-point numbers:\n");
	while (scanf("%f %f", &num1, &num2) == 2)
	{
		printf("result = %.2f\n", calculate(num1, num2));
		printf("Enter two more numbers (or non-numeric to quit):\n");
	}
	printf("Bye\n");
	return (0);
}

float	calculate(float n1, float n2)
{
	float	dif;
	float	product;
	float	div;

	if (n1 > n2)
		dif = n1 - n2;
	else if (n1 < n2)
		dif = n2 - n1;
	else
		dif = 0.0;  /* 两数相等时差值为0 */
	product = n1 * n2;
	if (product != 0.0)
		div = dif / product;
	else
		div = 0.0;  // 或者可以返回特殊值表示错误
	return (div);
}
