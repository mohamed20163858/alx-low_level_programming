#include "main.h"
/**
 * print_rev -  a function that prints every other character of a string
 * , starting with the first character, followed by a new line.
 * @s: the pointer to char
 */
void print_rev(char *s)
{
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		++i;
	}
	for (j = i; j >= 0; --j)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
