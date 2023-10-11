#include <stdio.h>

unsigned int Packing(unsigned int pack)
{
    char charA = 'A';
    char charB = 'B';
    char charC = 'C';
    char charD = 'D';

    pack = pack | (charA << 24);
    pack = pack | (charB << 16);
    pack = pack | (charC << 8);
    pack = pack | charD;

    return pack;
}

void Unpacking(unsigned int pack)
{
    char extCharA = (char)((pack >> 24) & 0xFF);
    char extCharB = (char)((pack >> 16) & 0xFF);
    char extCharC = (char)((pack >> 8) & 0xFF);
    char extCharD = (char)(pack & 0xFF);

    printf("Unpacking.\nCharA = %c\nCharB = %c\nCharC = %c\nCharD = %c\n\n", extCharA, extCharB, extCharC, extCharD);
}

int main()
{
    unsigned int pack = 0;
    printf("\nPacking.\nResult: %u\n\n", Packing(pack));
    Unpacking(Packing(pack));
    return 0;
}