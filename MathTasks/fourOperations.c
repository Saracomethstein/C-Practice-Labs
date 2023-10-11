#include <stdio.h>

void FourOperations(double x){
    double st2 = x * x;
    double st3 = st2 * x;
    double st5 = st2 * st3;
    double st10 = st5 * st5;

    printf("x^3: %0.2lf\nx^10: %0.2lf.", st3, st10);
}

int main(){
    double x = 0;
	int scan = 0;
	char scanChar = 0;

	printf("Enter X (integer or real number): ");
	scan = (scanf("%lf%c", &x, &scanChar));
	if (scan == 2 && scanChar == '\n')
	{
		FourOperations(x);
	}
	else
	{
		printf("n/a");
	}
    return 0;
}