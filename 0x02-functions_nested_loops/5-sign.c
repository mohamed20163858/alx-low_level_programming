#include <stdio.h>
/**
 * print_sign - print the sign of a given number
 * @n: input parameter
 * Return: 1 if n is positive, -1 if n is negative, 0 otherwise
 */
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return (1);
}
else if (n == 0)
{
putchar('0');
return (0);
}
else
{
putchar('-');
return (-1);
}
}
