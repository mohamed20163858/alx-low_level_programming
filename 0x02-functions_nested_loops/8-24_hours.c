#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
char a, b, c, d;
a = '0';
b = '0';
c = '0';
d = '0';
while (1)
{
printf("%c%c:%c%c\n", a, b, c, d);
d++;
if (d > '9')
{
d = '0';
c++;
}
if (c > '5')
{
c = '0';
b++;
}
if (b > '9')
{
b = '0';
a++;
}
if (a == '2' && b == '3' && c == '5' && d == '9')
{
printf("%c%c:%c%c\n", a, b, c, d);
break;
}
}
}
