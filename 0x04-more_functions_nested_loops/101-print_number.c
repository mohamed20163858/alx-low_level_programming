#include <stdio.h>
#include <math.h>
#include "main.h"
/**
 * print_number - prints any given number as a char
 *@n: the input value to be printed
 */
void print_number(int n)
{
int x, num, count, i;
x = n;
count = 0;
if (n < 0)
{
putchar('-');
n = n * -1;
}
while (x)
{
x = x / 10;
count++;
}
x = n;
for (i = count - 1; i >= 0; --i)
{
num = (int) pow(10, i);
x =  x / num;
_putchar(x + 48);
x = n % num;
}
_putchar('\n');
}
