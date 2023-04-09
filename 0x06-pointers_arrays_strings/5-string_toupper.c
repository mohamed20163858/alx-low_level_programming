#include "main.h"
/**
 * string_toupper - capitalize all letters in string
 * @a: string to manipulate
 * Return: string with all letters capitalized
 */
char *string_toupper(char *a)
{
	int i;

	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] <= 122 && a[i] >= 97)
		{
			a[i] = a[i] - 32;
		}
		++i;
	}
	return (a);
}
