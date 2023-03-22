#include <stdio.h>
/**
 * _islower - has an input letter
 * @c: the input letter to check
 * Return: 1 if it is lowercase letter 0 otherwise
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
