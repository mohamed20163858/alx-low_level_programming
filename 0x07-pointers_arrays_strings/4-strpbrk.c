#include "main.h"
#define NULL 0
/**
 * _strpbrk - return pointer to byte in s that matches
 * a byte in accepted target
 * @s: string to search
 * @accept: target matches
 * Return: pointer to index of string at first occurence
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			++j;
		}
		++i;
		j = 0;
	}
	return (NULL);
}
