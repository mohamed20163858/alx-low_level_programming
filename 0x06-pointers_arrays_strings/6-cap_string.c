#include "main.h"
/**
 * cap_string - capitalize first letter of all words
 * @a: string to manipulate
 * Return: string
 */
char *cap_string(char *a)
{
	int i;
	int j;
	char arr[] = {' ', '\t', '\n', ',', ';', '.', '!', '?'
		, '"', '(', ')', '{', '}'};
	int n;

	i = 0;
	n = sizeof(arr) / sizeof(char);
	if (a[0] >= 'a' && a[0] <= 'z')
	{
		a[0] -= 32;
	}
	while (a[i] != '\0')
	{
		for (j = 0; j < n; ++j)
		{
			if (a[i] == arr[j] && a[i + 1] != '\0' && a[i + 1] >= 'a'
					&& a[i + 1] <= 'z')
			{
				a[i + 1] -= 32;
			}
		}
		++i;
	}
	return (a);
}
