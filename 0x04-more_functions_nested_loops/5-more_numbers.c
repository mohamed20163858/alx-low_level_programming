#include <stdio.h>
#include "main.h"
/**
 * more_numbers - prints numbers from 0 to 14 ten times
 */
void more_numbers(void)
{
int i, j, result;
for (i = 0; i < 10; ++i)
{
for (j = 48; j < 63; ++j)
{
if (j < 58)
{
result = j;
}
else
{
_putchar(49);
result = j - 10;
}
_putchar(result);
}
_putchar('\n');
}
}
