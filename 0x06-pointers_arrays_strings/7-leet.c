#include "main.h"
/**
 * leet - encode string into 1337 leet
 * @a: string to manipulate
 * Return: string
 */
char *leet(char *a)
{
	int i;
	int j;
	char arr[] = {'a', 'e', 'o', 't', 'l'};
	char convert[] = {'4', '3', '0', '7', '1'};
	int n = sizeof(arr) / sizeof(char);

	i = 0;
	while (a[i] != '\0')
	{
		for (j = 0; j < n; ++j)
		{
			if (a[i] == arr[j] || a[i] == arr[j] - 32)
			{
				a[i] = convert[j];
			}
		}
		++i;
	}
	return (a);
}
