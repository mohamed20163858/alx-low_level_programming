#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * this main function prints the lowercase alphabet in reverse
 * Return: Always an output messaage then  0 (success)
 */
int main(void)
{
int i;
char c;
c = 'z';
for(i=0; i < 26; ++i)
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}
