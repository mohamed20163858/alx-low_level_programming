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
int i, j, k;
for (i = 48; i < 58; ++i)
{
for (j = i + 1; j < 58; ++j)
{
for (k = j + 1; k < 58; ++k)
{
putchar(i);
putchar(j);
putchar(k);
if (k == 57 && j == 56 && i == 55)
{
break;
}
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
