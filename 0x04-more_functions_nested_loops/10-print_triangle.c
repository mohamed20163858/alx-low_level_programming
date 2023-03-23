#include <stdio.h>
#include "main.h"
/**
 * print_triangle - draw a triangle using character # using the
 * giving input size
 * @size: the input value
 */
void print_triangle(int size)
{
int i, j, position;
position = size - 1;
if (size <= 0)
{
_putchar('\n');
return;
}
for (i = 0; i < size; ++i)
{
for (j = 0; j < size; ++j)
{
if (j < position)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
position--;
_putchar('\n');
}
}
