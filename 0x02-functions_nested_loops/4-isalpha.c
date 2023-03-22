#include <stdio.h>
/**
 * _isalpha - has an input letter
 * @c: the input letter to check
 * Return: 1 if it is lowercase letter 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
