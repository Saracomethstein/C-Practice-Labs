#include <stdio.h>

double mathPow(double n, int pow)
{
    double result = 1;
    for (int i = 1; i <= pow; ++i)
    {
        result = result * n;
    }
    return result;
}
double calculate(double x)
{
    return 2 * mathPow(x, 4) - 3 * mathPow(x, 3) + 4 * mathPow(x, 2) - 5 * x + 6;
}

int main()
{
    double x = 0;
    char scanChar = 0;
    printf("Add X (integer or real number):");
    int scan = (scanf("%lf%c", &x, &scanChar));
    while (1)
    {
        if (scan == 2 && scanChar == '\n')
        {
            printf("Result: %0.3lf", calculate(x));
            break;
        }
        else
        {
            printf("To get the answer you must enter a number! Try again.");
        }
    }
    return 0;
}