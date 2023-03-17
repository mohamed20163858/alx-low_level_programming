#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * this main function prints prints all the numbers of base 16 in lowercase
 * Return: Always an output messaage then 0 (success)
 */
int main(void)
{
int i;
char c;
c = 'a';
for (i = 48; i < 58; ++i)
{
putchar(i);
}
for (i = 0; i < 6; ++i)
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
