#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 (Success)
 */
int main(void)
{
int i;
long int fi, fi_plus_1, temp;
fi = 1;
fi_plus_1 = 2;
printf("%d, %d", fi, fi_plus_1);
for (i = 0; i < 48; ++i)
{
temp = fi + fi_plus_1;
fi = fi_plus_1;
fi_plus_1 = temp;
printf(", %ld", temp);
}
printf("\n");
return (0);
}
