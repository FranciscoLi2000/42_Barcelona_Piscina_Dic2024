/* Find out what your system does with integer overflow, floating-point overflow, and
 * floating-point underflow by using the experimental approach; that is, write programs
 * having these problems. (You can check the discussion in Chapter 4 of limits.h and
 * float.h to get guidance on the largest and smallest values.) */

#include <stdio.h>
#include <limits.h>  // For integer limits
#include <float.h>   // For floating-point limits
#include <math.h>    // For mathematical functions

void	test_integer_overflow(void)
{
	printf("=== INTEGER OVERFLOW TESTING ===\n");
	printf("INT_MAX = %d\n", INT_MAX);
	printf("INT_MIN = %d\n\n", INT_MIN);

	/* Test signed integer overflow */
	printf("Testing signed integer overflow:\n");
	int	max_int = INT_MAX;
	printf("Starting value: %d\n", max_int);
	/* Add 1 to maximum integer - this should cause overflow */
	printf("After adding 1: %d\n", max_int++);
	/* Try adding more to see the pattern */
	printf("INT_MAX + 2 = %d\n", max_int++);
	/* Test multiplication overflow */
	int	half_max = INT_MAX / 2;
	printf("\nTesting multiplication overflow:\n");
	printf("Half of INT_MAX: %d\n", half_max);

	int	overflow_mult = half_max * 3;  // This should overflow
	printf("(INT_MAX/2) * 3 = %d\n", overflow_mult);
	/* Test unsigned integer overflow */
	printf("\nTesting unsigned integer overflow:\n");
	printf("UINT_MAX = %u\n", UINT_MAX);
	unsigned int	max_uint = UINT_MAX;
	max_uint = max_uint + 1;  // Should wrap around to 0
	printf("UINT_MAX + 1 = %u\n", max_uint);
	printf("\n");
}

void	test_floating_point_overflow(void)
{
	printf("=== FLOATING-POINT OVERFLOW TESTING ===\n");
	printf("FLT_MAX = %e\n", FLT_MAX);
	printf("DBL_MAX = %e\n\n", DBL_MAX);
	/* Test float overflow */
	printf("Testing float overflow:\n");
	float	large_float = FLT_MAX;
	printf("Starting with FLT_MAX: %e\n", large_float);
	/* Multiply by 2 to cause overflow */
	large_float = large_float * 2.0f;
	printf("FLT_MAX * 2 = %e\n", large_float);
	/* Test with exponential growth */
	float	growing = 1.0f;
	printf("\nExponential growth test (powers of 10):\n");
	for (int i = 0; i < 40; i += 5)
	{
		growing = powf(10.0f, (float)i);
		printf("10 ^ %d = %e\n", i, growing);
	}
	/* Test double overflow */
	printf("\nTesting double overflow:\n");
	double	large_double = DBL_MAX;
	printf("Starting with DBL_MAX: %e\n", large_double);
	large_double = large_double * 2.0;
	printf("DBL_MAX * 2 = %e\n", large_double);
	printf("\n");
}

void	test_floating_point_underflow(void)
{
	printf("=== FLOATING-POINT UNDERFLOW TESTING ===\n");
	printf("FLT_MIN = %e\n", FLT_MIN);
	printf("DBL_MIN = %e\n", DBL_MIN);
	printf("FLT_EPSILON = %e\n", FLT_EPSILON);
	printf("DBL_EPSILON = %e\n\n", DBL_EPSILON);
	/* Test gradual underflow with float */
	printf("Testing float underflow (gradual):\n");
	float	small_float = 1.0f;
	/* Divide by increasingly large numbers */
	for (int i = 0; i < 10; i++)
	{
		small_float = small_float / 10.0f;
		printf("1.0 / 10^%d = %e\n", i + 1, small_float);
	}
	/* Test what happens when we go beyond the minimum */
	printf("\nTesting extreme underflow:\n");
	float	tiny = FLT_MIN;
	printf("FLT_MIN = %e\n", tiny);
	tiny = tiny / 2.0f;  // This should cause underflow
	printf("FLT_MIN / 2 = %e\n", tiny);
	tiny = tiny / 2.0f;  // Even smaller
	printf("(FLT_MIN / 2) / 2 = %e\n", tiny);
	/* Test subnormal numbers (denormalized numbers) */
	printf("\nTesting subnormal/denormalized numbers:\n");
	float	subnormal = FLT_MIN;
	for (int i = 0; i < 10; i++)
	{
		subnormal = subnormal / 2.0f;
		printf("FLT_MIN / 2 ^ %d = %e\n", i + 1, subnormal);
		if (subnormal == 0.0f)
		{
			printf("Reached true zero at iteration %d\n", i + 1);
			break ;
		}
	}
	printf("\n");
}

void	test_special_arithmetic(void)
{
	printf("=== SPECIAL FLOATING-POINT VALUES ===\n");
	/* Test division by zero */
	printf("Testing division by zero:\n");
	float	positive_inf = 1.0f / 0.0f;
	float	negative_inf = -1.0f / 0.0f;
	printf("1.0 / 0.0 = %f\n", positive_inf);
	printf("-1.0 / 0.0 = %f\n", negative_inf);
	/* Test NaN (Not a Number) */
	printf("\nTesting NaN generation:\n");
	float	nan_result = 0.0f / 0.0f;
	printf("0.0 / 0.0 = %f\n", nan_result);
	float	sqrt_negative = sqrtf(-1.0f);
	printf("sqrt(-1.0) = %f\n", sqrt_negative);
	/* Test arithmetic with special values */
	printf("\nArithmetic with special values:\n");
	printf("inf + 1000000 = %f\n", positive_inf + 1000000.0f);
	printf("inf * 2 = %f\n", positive_inf * 2.0f);
	printf("inf - inf = %f\n", positive_inf - positive_inf);
	printf("inf / inf = %f\n", positive_inf / positive_inf);
	printf("\n");
}

int	main(void)
{
	printf("SYSTEM NUMERICAL BEHAVIOR ANALYSIS\n");
	printf("===================================\n\n");
	printf("System information:\n");
	printf("sizeof(int) = %zu bytes\n", sizeof(int));
	printf("sizeof(float) = %zu bytes\n", sizeof(float));
	printf("sizeof(double) = %zu bytes\n\n", sizeof(double));

	test_integer_overflow();
	test_floating_point_overflow();
	test_floating_point_underflow();
	test_special_arithmetic();

	printf("=== SUMMARY ===\n");
	printf("This program demonstrates how your system handles:\n");
	printf("1. Integer overflow - typically wraps around (two's complement)\n");
	printf("2. Float overflow - becomes infinity (IEEE 754 standard)\n");
	printf("3. Float underflow - becomes zero or subnormal numbers\n");
	printf("4. Special values - infinity and NaN\n");

	return (0);
}
