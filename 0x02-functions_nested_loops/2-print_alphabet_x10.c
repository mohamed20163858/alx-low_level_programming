#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: print alphaet from a to z 10 times
 */
void print_alphabet_x10(void)
{
int i;
for (i = 0; i < 10; ++i)
{
char c = 'a';
do
{
putchar(c);
c++;
} while( c <= 'z');
putchar('\n');
}
}
