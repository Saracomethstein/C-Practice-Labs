#include <stdio.h>

double SixOperations(double x)
{
	double st2 = x * x;
	double st3 = st2 * x;
	double st7 = st3 * st3 * x;
	double st21 = st7 * st7 * st7;
	return st21;
}

int main()
{
	double x = 0;
	int scan = 0;
	char scanChar = 0;

	printf("Enter X (integer or real number):");
	scan = (scanf("%lf%c", &x, &scanChar));
	if (scan == 2 && scanChar == '\n')
	{
		printf("Result: %0.2lf", SixOperations(x));
	}
	else
	{
		printf("n/a");
	}
	return 0;
}