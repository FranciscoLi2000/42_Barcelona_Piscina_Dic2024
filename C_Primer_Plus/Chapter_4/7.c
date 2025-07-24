/* Write a program that sets a type double variable to 1.0/3.0 and a type float variable to 1.0/3.0.
 * Display each result three times—once showing four digits to the right of the decimal, once showing 12 digits to the right of the decimal, and once showing 16 digits to the right of the decimal.
 * Also have the program include float.h and display the values of FLT_DIG and DBL_DIG.
 * Are the displayed values of 1.0/3.0 consistent with these values? */

#include <stdio.h>
#include <float.h>

int	main(void)
{
	double	num1 = 1.0 / 3.0;
	float	num2 = 1.0 / 3.0;

	printf("=== Floating Point Precision Demonstration ===\n\n");
	printf("System precision constants:\n");
	printf("FLT_DIG (float decimal digits):  %d\n", FLT_DIG);
	printf("DBL_DIG (double decimal digits): %d\n\n", DBL_DIG);

	printf("Double precision (1.0/3.0):\n");
	printf("4 decimal places:  %.4f\n", num1);
	printf("12 decimal places: %.12f\n", num1);
	printf("16 decimal places: %.16f\n\n", num1);
	
	printf("Float precision (1.0/3.0):\n");
	printf("4 decimal places:  %.4f\n", num2);
	printf("12 decimal places: %.12f\n", num2);
	printf("16 decimal places: %.16f\n\n", num2);
	
	printf("=== Analysis ===\n");
	printf("Notice how the float becomes inaccurate after %d significant digits,\n", FLT_DIG);
	printf("while double maintains accuracy for %d significant digits.\n", DBL_DIG);
	printf("This demonstrates the fundamental limitation of floating-point representation.\n");

	return (0);
}
