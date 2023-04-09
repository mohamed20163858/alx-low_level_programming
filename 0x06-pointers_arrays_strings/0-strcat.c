#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: string to be appended to
 * @src: string to append
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
    int i;
    int j;
    
    i = 0;
    j = 0;
    while(dest[i] != '\0')
    {
        i++;
    }
    while(src[j] != '\0')
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return (dest);
}
