/**
 * _strlen - a function that returns the length of a string.
 * @s: the pointer to char
 * Return: the length of string
 */
int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
