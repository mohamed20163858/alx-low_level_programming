#include "main.h"
/**
 *  puts_half - a function that prints half of a string
 *  , followed by a new line.
 * @str: the pointer to char
 */
void puts_half(char *str)
{
	int i;
	int j;
	int start;

	i = 0;
	while (str[i] != '\0')
	{
		++i;
	}
	if (i % 2 == 0)
	{
		start = i / 2;
	}
	else
	{
		start = i / 2;
	}
	for (j = start; j < i; ++j)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
