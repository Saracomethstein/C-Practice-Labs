<h1>Mathematical programs (Information)</h1>

1. [formula.c](https://github.com/Saracomethstein/C-Practice-Labs/blob/develop/MathTasks/formula.c) - The project calculates the value of a formula with a user-specified variable X.
```c
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
```
2. [assignValue.c](https://github.com/Saracomethstein/C-Practice-Labs/blob/develop/MathTasks/assignValue.c) -  Assign the integer variable k a value equal to the third digit from the end in the representation of a positive integer X.
```c
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
```
3. [sumOfDigits.c](https://github.com/Saracomethstein/C-Practice-Labs/blob/develop/MathTasks/sumOfDigits.c) - Assign the integer variable k a value equal to the sum of the digits in the representation of a positive three-digit integer X.
```c
int SumOfDigits(int x){
    int k = 0;

    while (x != 0)
    {
        k += x % 10;
        x = x / 10;
    }
    
    return k;
}
```
4. [fraction.c](https://github.com/Saracomethstein/C-Practice-Labs/blob/develop/MathTasks/fraction.c) - Assign the integer variable k a value equal to the first digit in the fractional part of a positive real number X.
```c
int Fraction(double x){
    int k = (int)(x * 10) % 10;
    return k;
}
```
5. [reverseOrder.c](https://github.com/Saracomethstein/C-Practice-Labs/blob/develop/MathTasks/reverseOrder.c) - Determine the number obtained by writing the digits of a given three-digit integer in reverse order.
```c
int ReverseOrder(int x){
    int k = 0;
    while (x)
    {
        k = k * 10 + x % 10;
        x = x / 10;
    }
    return k;
}
```
6. [time.c](https://github.com/Saracomethstein/C-Practice-Labs/blob/develop/MathTasks/time.c) - Given the nth second of a day, determine how many complete hours and minutes have passed up to that moment.
```c
void GiveMeTime(int seconds)
{
    int days = seconds / (24 * 3600);
    int hours = (seconds % (24 * 3600)) / 3600;
    int minutes = (seconds % 3600) / 60;
  
    printf("Days: %d\nHours: %d\nMinutes: %d", days, hours, minutes);
}
```
7. [sixOperations.c](https://github.com/Saracomethstein/C-Practice-Labs/blob/develop/MathTasks/sixOperations.c) - Given a real number x, using only multiplication, obtain x21 in six operations.
```c
double SixOperations(double x)
{
	double st2 = x * x;
	double st3 = st2 * x;
	double st7 = st3 * st3 * x;
	double st21 = st7 * st7 * st7;
	return st21;
}
```
8. [fourOperations.c](https://github.com/Saracomethstein/C-Practice-Labs/blob/develop/MathTasks/fourOperations.c) - Given a real number x, using only multiplication, obtain x3 and x10 in four operations.
```c
void FourOperations(double x){
    double st2 = x * x;
    double st3 = st2 * x;
    double st5 = st2 * st3;
    double st10 = st5 * st5;

    printf("x^3: %0.2lf\nx^10: %0.2lf.", st3, st10);
}
```
9. [fiveOperations.c](https://github.com/Saracomethstein/C-Practice-Labs/blob/develop/MathTasks/fiveOperations.c) - Given a real number x, using only multiplication, obtain x5 and x13 in five operations.
```c
void FiveOperations(double x){
    double st2 = x * x;
    double st3 = st2 * x;
    double st5 = st2 * st3;
    double st10 = st5 * st5;
    double st13 = st10 * st3;

    printf("x^5: %0.2lf\nx^13: %0.2lf.", st5, st13);
}
```
10. [packagingUnpacking.c](https://github.com/Saracomethstein/C-Practice-Labs/blob/develop/MathTasks/packagingUnpacking.c) -  "Pack" four characters into an unsigned integer. The length of the unsigned integer is 4. "Unpack" an unsigned integer into four characters. The length of the unsigned integer is 4.
```c
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
```
11) [bitReplacement.c](https://github.com/Saracomethstein/C-Practice-Labs/blob/develop/MathTasks/bitReplacement.c) - Replace n bits in the integer variable x, starting from position p, with the n highest-order inverted bits of the integer variable y.
```c
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
```
12) [cyclicShift.c](https://github.com/Saracomethstein/C-Practice-Labs/blob/develop/MathTasks/cyclicShift.c) - Cyclically shift the value of an integer variable n positions to the right and left.
```c
unsigned int ShiftRight(unsigned int x, int n){
    unsigned result = (x >> n) | (x << (sizeof(x) * 8 - n));
    return result;
}

unsigned int ShiftLeft(unsigned int x, int n){
    unsigned result = (x << n) | (x >> (sizeof(x) * 8 - n));
    return result;
}
```