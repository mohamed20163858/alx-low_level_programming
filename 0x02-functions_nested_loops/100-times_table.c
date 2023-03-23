#include <stdio.h>
#include "main.h"
/**
 * print_times_table -  prints the n times table, starting with 0.
 * @n: the first argument
 */
void print_times_table(int n)
{
int i, j;
if (n > 15 || n < 0)
{
return;
}
for (i = 0; i <= n; ++i)
{
for (j = 0; j <= n; ++j)
{
if (j < n)
{
if (i * (j + 1) >= 100)
{
printf("%d, ", i * j);
}
else if (i * (j + 1) >= 10)
{
printf("%d,  ", i * j);
}
else
{
printf("%d,   ", i * j);
}
}
else
{
printf("%d\n", i * j);
}
}
}
}
