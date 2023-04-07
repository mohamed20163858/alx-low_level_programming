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
	++i;
	if (i % 2 == 0)
	{
		start = i / 2 - 1;
	}
	else
	{
		start = i / 2;
	}
	for (j = start; j < i - 1; ++j)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
