#include <stdio.h>

int SumOfDigits(int x){
    int k = 0;

    while (x != 0)
    {
        k += x % 10;
        x = x / 10;
    }
    
    return k;
}

int main(){
    int x = 0;
    char scanChar = 0;

    printf("Add X (integer):");
    int scan = (scanf("%d%c", &x, &scanChar));

    if (scan == 2 && scanChar == '\n' && x >= 0)
    {
        printf("Result: %d", SumOfDigits(x));
    }
    else
    {
        printf("n/a");
    }
    return 0;
}