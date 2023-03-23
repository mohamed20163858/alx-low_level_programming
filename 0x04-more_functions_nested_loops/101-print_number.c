#include <stdio.h>
#include "main.h"
/**
 * print_number - prints any given number as a char
 *@n: the input value to be printed
 */
void print_number(int n)
{
int x, count;
x = n;
count = 1;
if (n < 0)
{
_putchar('-');
n = n * -1;
}
if (n == 0)
{
_putchar('0');
return;
}
while (x)
{
x = x / 10;
count *= 10;
}
x = n;
while (count != 1)
{
count /= 10;
x =  x / count;
_putchar(x + 48);
x = n % count;
}
}
