#include <stdio.h>

int Fraction(double x){
    int k = (int)(x * 10) % 10;
    return k;
}

int main(){
    double x = 0;
    char scanChar = 0;

    printf("Add X (integer or real number):");
    int scan = (scanf("%lf%c", &x, &scanChar));

    if (scan == 2 && scanChar == '\n' && x >= 0)
    {
        printf("Result: %d", Fraction(x));
    }
    else
    {
        printf("n/a");
    }
    return 0;
}