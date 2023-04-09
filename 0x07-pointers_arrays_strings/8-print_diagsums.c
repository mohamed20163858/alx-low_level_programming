#include "main.h"
/**
 * print_diagsums - print sums of diagonals in matrix
 * @a: matrix
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
    int i;
    int sum1;
    int sum2;
    
    sum1 = 0;
    sum2 = 0;
    for (i = 0; i < size; ++i)
    {
        sum1 += a[i + size * i];
        sum2 += a[size - i -1 + size * i];
    }
    printf("%d, %d\n", sum1, sum2);
}