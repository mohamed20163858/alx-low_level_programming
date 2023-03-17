#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * this main function print the alphapt from a to z
 * Return: Always an output messaage then  0 (success)
 */
int main(void)
{
char c;
int i;
c = 'a';
for(i=0; i < 26; ++i)
{
putchar(c);
c++;
}
return (0);
}
