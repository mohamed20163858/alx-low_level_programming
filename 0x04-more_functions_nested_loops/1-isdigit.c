#include <stdio.h>
#include "main.h"
/**
 * _isdigit - check if the given character is digit or not
 * @c: the input parameter
 * Return: 1 if the given input is digit and 0 otherwise
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
