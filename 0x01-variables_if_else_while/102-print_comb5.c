#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * this main function prints all possible combinations of single-digit numbers.
 * Return: Always an output messaage then 0 (success)
 */
int main(void)
{
int i, j, m, n;
for (i = 48; i < 58; ++i)
{
for (j = 48; j < 58; ++j)
{
for (m = 48; m < 58; ++m)
{
for (n = 48; n < 58; ++n)
{
if (m >= i && n >= j)
{
if (m == i && n == j)
{
continue;
}
putchar(i);
putchar(j);
putchar(' ');
putchar(m);
putchar(n);
if (i == 57 && j == 56 && m == 57 && n == 57)
{
break;
}
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
