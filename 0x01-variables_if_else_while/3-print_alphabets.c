#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * this main function print the alphapt from a to z then A to Z
 * Return: Always an output messaage then  0 (success)
 */
int main(void)
{
char c, d;
int i;
c = 'a';
d = 'A';
for(i=0; i < 26; ++i)
{
putchar(c);
c++;
}
for(i=0; i < 26; ++i)
{
putchar(d);
d++;
}
putchar('\n');
return (0);
}
