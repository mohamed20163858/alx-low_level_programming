#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * this main function print  prints all single digit numbers of base10 starting from 0
 * Return: Always an output messaage then  0 (success)
 */
int main(void)
{
int i;
for(i=48; i < 58; ++i)
{
putchar(i);
}
putchar('\n');
return (0);
}
