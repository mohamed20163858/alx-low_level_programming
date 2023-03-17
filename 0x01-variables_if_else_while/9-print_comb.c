#include <time.h>
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
int i;
for(i = 48; i < 58; ++i)
{
putchar(i);
if (i < 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
