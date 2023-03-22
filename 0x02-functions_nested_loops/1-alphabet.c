#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always an output messaage then  0 (Success)
 */
void print_alphabet(void);
void print_alphabet(void)
{
char c = 'a';
do {
putchar(c);
c++;
} while (c <= 'z');
putchar('\n');
}
