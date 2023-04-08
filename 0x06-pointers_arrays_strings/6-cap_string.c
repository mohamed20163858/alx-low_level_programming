#include "main.h"

char *cap_string(char *a)
{
    int i;
    int j;
    char arr[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
    int n;

    i = 0;
    n = sizeof(arr) / sizeof(char);
    while (a[i] != '\0')
    {
        for(j = 0; j < n; ++j)
        {
            if(a[i] == arr[j] && a[i + 1] != '\0' && a[i + 1] >= 'a' && a[i + 1] <= 'z')
            {
                a[i + 1] -= 32;
            }
        }
        ++i;
    }
    return (a);
}
