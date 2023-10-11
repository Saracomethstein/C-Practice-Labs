#include <stdio.h>

int ReverseOrder(int x){
    int k = 0;
    while (x)
    {
        k = k * 10 + x % 10;
        x = x / 10;
    }
    return k;
}

int main(){
    int x = 0;
    char scanChar = 0;

    printf("Enter X (integer):");
    int scan = (scanf("%d%c", &x, &scanChar));

    if (scan == 2 && scanChar == '\n')
    {
        printf("Result: %d", ReverseOrder(x));
    }
    else
    {
        printf("n/a");
    }
    return 0;
}