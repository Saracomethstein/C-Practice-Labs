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

```
3. [sumOfDigits.c](https://github.com/Saracomethstein/C-Practice-Labs/blob/develop/MathTasks/sumOfDigits.c) - Assign the integer variable k a value equal to the sum of the digits in the representation of a positive three-digit integer X.
```c

```
4. [fraction.c](https://github.com/Saracomethstein/C-Practice-Labs/blob/develop/MathTasks/fraction.c) - Assign the integer variable k a value equal to the first digit in the fractional part of a positive real number X.
```c

```
5. [reverseOrder.c](https://github.com/Saracomethstein/C-Practice-Labs/blob/develop/MathTasks/reverseOrder.c) - Determine the number obtained by writing the digits of a given three-digit integer in reverse order.
```c

```
6. [time.c](https://github.com/Saracomethstein/C-Practice-Labs/blob/develop/MathTasks/time.c) - Given the nth second of a day, determine how many complete hours and minutes have passed up to that moment.
```c

```
7. [sixOperations.c](https://github.com/Saracomethstein/C-Practice-Labs/blob/develop/MathTasks/sixOperations.c) - Given a real number x, using only multiplication, obtain x21 in six operations.
```c

```
8. [fourOperations.c](https://github.com/Saracomethstein/C-Practice-Labs/blob/develop/MathTasks/fourOperations.c) - Given a real number x, using only multiplication, obtain x3 and x10 in four operations.
```c

```
9. [fiveOperations.c](https://github.com/Saracomethstein/C-Practice-Labs/blob/develop/MathTasks/fiveOperations.c) - Given a real number x, using only multiplication, obtain x5 and x13 in five operations.
```c

```
10. [packagingUnpacking.c](https://github.com/Saracomethstein/C-Practice-Labs/blob/develop/MathTasks/packagingUnpacking.c) -  "Pack" four characters into an unsigned integer. The length of the unsigned integer is 4. "Unpack" an unsigned integer into four characters. The length of the unsigned integer is 4.
```c

```
11) [bitReplacement.c](https://github.com/Saracomethstein/C-Practice-Labs/blob/develop/MathTasks/bitReplacement.c) - Replace n bits in the integer variable x, starting from position p, with the n highest-order inverted bits of the integer variable y.
```c

```
12) [cyclicShift.c](https://github.com/Saracomethstein/C-Practice-Labs/blob/develop/MathTasks/cyclicShift.c) - Cyclically shift the value of an integer variable n positions to the right and left.
```c

```