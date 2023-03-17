#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always an output messaage then  0 (Success)
 */
int main(void)
{
int a;
int b = 5;
for (a = 0; a < b; a++)
{
printf("%d\n", a);
}
a = 0;
for (a < b;;)
{
printf("%d\n", a++);
}
a = 0;
for (; a < b;)
{
printf("%d\n", a++);
}
for (int a = 0; a < b; a++)
{
printf("%d\n", a);
}
for (a = 0; a < b; a++)
printf("%d\n", a);
return (0);
}
