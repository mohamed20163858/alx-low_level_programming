#include "main.h"
/**
 * _strstr - locate and return pointer to first occurence of substring
 * @haystack: string to search
 * @needle: target substring to search for
 * Return: pointer to index of string at first occurence of whole substring
 */
char *_strstr(char *haystack, char *needle)
{
    int i;
    int j;
    
    i = 0;
    j = 0;
    while (haystack[i] != '\0')
    {
        while (needle[j] != '\0')
        {
            if (haystack[i + j] != needle[j])
            {
                break;
            }
            ++j;
        }
        if (needle[j] == '\0')
        {
            return (haystack + i);
        }
        j = 0;
        ++i;
    }
    return (NULL);
}