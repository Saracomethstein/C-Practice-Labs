#include <stdio.h>

unsigned int ShiftRight(unsigned int x, int n){
    unsigned result = (x >> n) | (x << (sizeof(x) * 8 - n));
    return result;
}

unsigned int ShiftLeft(unsigned int x, int n){
    unsigned result = (x << n) | (x >> (sizeof(x) * 8 - n));
    return result;
}

int main(){
    int scan, n;
    unsigned int x = 0;
    char scanChar = 0;
    
    printf("\nEnter the original value for X: ");
    scan = (scanf("%u%c", &x, &scanChar));
    if (scan == 2 && scanChar == '\n') {
        printf("Enter the number of shifts: ");
        scan = (scanf("%d%c", &n, &scanChar));
        if (scan == 2 && scanChar == '\n') {
            printf("\nOriginal value: %u\n", x);
            printf("Shift to the right: %u\n", ShiftRight(x, n));
            printf("Shift to the left: %u\n\n", ShiftLeft(x, n));
        } else  {
            printf("n/a");
        }
    } else {
        printf("n/a");
    }
    return 0;
}