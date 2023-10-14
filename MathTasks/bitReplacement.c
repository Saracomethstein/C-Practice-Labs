#include <stdio.h>

unsigned int BitReplacement(){
    int p = 3;
    int n = 2;
    unsigned int x = 150;
    unsigned int y = 20;

    unsigned int mask = ~(~0u << n) << (p - n + 1);
    y = ~y;
    x = x & ~mask;
    x = x | (y << (p - n + 1));

    return x;
}

int main(){
    printf("Result: %u\n", BitReplacement());
    return 0;
}