#include <stdio.h>

int AssingValue(int x)
{
    int k = 0;
    int i = 0;
    while (x != 0)
    {
        k = x % 10;
        if (i == 2)
        {
            break;
        }
        x = x / 10;
        ++i;
    }
    return k;
}

int main()
{
    int x = 0;
    char scanChar = 0;

    printf("Enter X (integer):");
    int scan = (scanf("%d%c", &x, &scanChar));

    if (scan == 2 && scanChar == '\n' && x >= 0)
    {
        printf("Result: %d", AssingValue(x));
    }
    else
    {
        printf("n/a");
    }
    return 0;
}