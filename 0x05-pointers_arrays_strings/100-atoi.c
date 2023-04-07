/**
 * _atoi - a function that convert a string to an integer.
 * @s: the pointer to char
 * Return: the integer value of input string
 */
int _atoi(char *s)
{
	int i;
	int number;
	int sign;
	int flag;

	i = 0;
	sign = 0;
	number = 0;
	flag = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign++;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			if (sign % 2 == 0)
			{
				number = number * 10 + (int)(s[i] - 48);
			}
			else
			{
				number = number * 10 - (int)(s[i] - 48);
			}
		}
		else
		{
			if (flag)
			{
				break;
			}
		}
		i++;
	}
	return (number);
}
