#include <stdio.h>
#include "main.h"
/**
 * print_line - print _ n of times equal to the given input value
 * @n: the input value
 */
void print_line(int n)
{
int i;
for (i = 0; i < n; ++i)
{
_putchar('_');
}
_putchar('\n');
}
