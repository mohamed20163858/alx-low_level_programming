#include "main.h"
/**
 * _strspn - return length of string that matches values consistently
 * @s: string to search
 * @accept: target matches
 * Return: number of bytes consecutively matched
 */
unsigned int _strspn(char *s, char *accept)
{
    int i;
    int j;
    int count;
    
    i = 0;
    j = 0;
    count = 0;
    while(s[i] != '\0')
    {
        while(accept[j] != '\0')
        {
            if(s[i] == accept[j])
            {
              count++;
              j = 0;
              break;
            }
            j++;
        }
        if (accept[j] == '\0')
        {
            break;
        }
        i++;
    }
    return (count);
}