#include <stdio.h>
#include "main.h"
/**
 * _abs - print the absolute vale of the given value
 * @n: input parameter
 * Return: abs of the given value
 */
int _abs(int n)
{
if (n < 0)
{
return (-1 * n);
}
else
{
return (n);
}
}
