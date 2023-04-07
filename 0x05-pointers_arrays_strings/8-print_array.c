#include <stdio.h>
/**
 * print_array -  a function that prints n elements of an array of integers, followed by a new line.
 * @a: the pointer to int
 * @n: input integer
 */
void print_array(int *a, int n)
{
	int i;
	for (i = 0; i < n - 1; ++i)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[n - 1]);
}
