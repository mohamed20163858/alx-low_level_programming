#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - print the last digit of the given number
 * @x: the input argument
 * Return: the last digit
 */
int print_last_digit(int x)
{
int i = x % 10;
if (x < 0)
{
i = -1 * i;
}
_putchar(i + 48);
return (i);
}
