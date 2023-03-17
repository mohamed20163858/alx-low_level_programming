#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * This main function prints the lowercase alphabet in reverse
 *
 * Return: Always an output message then 0 (success)
 */

int main(void)
{
int i;
char c;
c = 'z';
for (i = 0; i < 26; ++i)
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}
