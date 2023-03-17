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
char num = '0';
for(i=0; i < 10; ++i)
{
putchar(num);
num++;
}
putchar('\n');
return (0);
}
