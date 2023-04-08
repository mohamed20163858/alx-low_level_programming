int _strcmp(char *s1, char *s2)
{
    int i;
    int j;
    int small;
    int result;
    i = 0;
    j = 0;
    result = 0;
    while(s1[i] != '\0')
    {
        i++;
    }
    while(s2[j] != '\0')
    {
        j++;
    }
    small = i < j ?  i : j;
    for (i = 0; i < small; ++i)
    {
        result = s1[i] - s2[i];
        if (result !=  0)
        {
            break;
        }
    }
    return (result);
}
