#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always an output messaages then  0 (Success)
 */
int main(void)
{
printf("Size of a char: %d byte(s)\n", sizeof(char));
printf("Size of an int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %d byte(s)\n", sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
printf("Size of a float: %d byte(s)\n", sizeof(float));
printf("Size of a double: %d byte(s)\n", sizeof(double));
printf("Size of a long double: %d byte(s)\n", sizeof(long double));
return (0);
}
