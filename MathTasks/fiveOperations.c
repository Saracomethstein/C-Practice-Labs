#include <stdio.h>

void FiveOperations(double x){
    double st2 = x * x;
    double st3 = st2 * x;
    double st5 = st2 * st3;
    double st10 = st5 * st5;
    double st13 = st10 * st3;

    printf("x^5: %0.2lf\nx^13: %0.2lf.", st5, st13);
}

int main(){
    double x = 0;
	int scan = 0;
	char scanChar = 0;

	printf("Enter X (integer or real number): ");
	scan = (scanf("%lf%c", &x, &scanChar));
	if (scan == 2 && scanChar == '\n')
	{
		FiveOperations(x);
	}
	else
	{
		printf("n/a");
	}
    return 0;
}