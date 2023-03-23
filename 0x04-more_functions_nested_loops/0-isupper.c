#include <stdio.h>
#include "main.h"
/**
 * _isupper - check if the given character is Upper case or lower case
 * @c: the input parameter
 * Return: 1 if the given char is upper and 0 otherwise
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
