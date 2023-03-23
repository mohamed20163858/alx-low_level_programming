#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - print \ n of times diagonally
 * equal to the given input value
 * @n: the input value
 */
void print_diagonal(int n)
{
int i, j;
if (n <= 0)
{
_putchar('\n');
return;
}
for (i = 0; i < n; ++i)
{
for (j = 0; j < i; ++j)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
