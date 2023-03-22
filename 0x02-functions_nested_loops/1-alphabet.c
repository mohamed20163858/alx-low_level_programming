#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: print alphaet from a to z
 */
void print_alphabet(void)
{
char c = 'a';
do {
putchar(c);
c++;
} while (c <= 'z');
putchar('\n');
}
