#include <stdio.h>
#include <math.h>

double formula(double x){
    return sqrt(2 * x + sin(fabs(3 * x))/ 3.56);
}

int main(){
    double x = 0;
    char scanChar = 0;

    printf("Enter X (integer or real number): ");
    int scan = (scanf("%lf%c", &x, &scanChar));

    if (scan == 2 && scanChar == '\n')
    {
        printf("Result: %lf", formula(x));
    }
    else
    {
        printf("n/a");
    }
    return 0;
}