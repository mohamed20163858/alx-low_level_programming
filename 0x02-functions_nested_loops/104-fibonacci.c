#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 (Success)
 */
int main(void)
{
int i;
long int fi, fi_plus_1, temp;
long fi_part_1, fi_part_2, fi_plus_1_part_1;
long fi_plus_1_part_2, overflow, temp_part_2;
long num = 10000000000;
fi = 1;
fi_plus_1 = 2;
printf("%ld, %ld", fi, fi_plus_1);
for (i = 0; i < 89; ++i)
{
temp = fi + fi_plus_1;
fi = fi_plus_1;
fi_plus_1 = temp;
printf(", %ld", temp);
}
for (i = 89; i < 96; ++i)
{
fi_part_1 = fi % num;
fi_part_2 =  fi / num;
fi_plus_1_part_1 = fi_plus_1 % num;
fi_plus_1_part_2 = fi_plus_1 / num;
overflow = (fi_part_1 + fi_plus_1_part_1) / num;
temp = (fi_part_1 + fi_plus_1_part_1) % num;
temp_part_2 = fi_part_2 + fi_plus_1_part_2 + overflow;
fi_part_1 = fi_plus_1_part_1;
fi_part_2 = fi_plus_1_part_2;
fi_plus_1_part_1 = temp;
fi_plus_1_part_2 = temp_part_2;
printf(", %ld%ld", temp, temp_part_2);
}
printf("\n");
return (0);
}
