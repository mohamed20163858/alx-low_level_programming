#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * this main function check the last digit of a number  and print a message
 * is greater than 5 , is 0  ,or is less than 6 and not 0
 * according to the given random number
 * Return: Always an output messaage then  0 (success)
 */
int main(void)
{
int n, x;
srand(time(0));
n = rand() - RAND_MAX / 2;
x = n % 10;
/* your code goes there */
if (x > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", x, n);
}
else if (x == 0)
{
printf("Last digit of %d is %d and is 0\n", x, n);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", x, n);
}
return (0);
}
