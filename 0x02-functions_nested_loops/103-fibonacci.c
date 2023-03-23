#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 (Success)
 */
int main(void)
{
long int fi, fi_plus_1, temp, sum;
fi = 1;
fi_plus_1 = 2;
sum = 0;
while (1)
{
temp = fi + fi_plus_1;
fi = fi_plus_1;
fi_plus_1 = temp;
if (fi % 2 == 0)
{
sum += fi;
}
if (fi_plus_1 > 4000000)
{
printf("%ld\n", sum);
break;
}
}
return (0);
}
