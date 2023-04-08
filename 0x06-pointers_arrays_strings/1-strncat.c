char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
    
	i = 0;
	j = 0;
	if (n < 1)
	{
        	return (dest);
	}
	while(dest[i] != '\0')
	{
		i++;
	}
	while(j < n && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
 	}
	dest[i + j] = '\0';
	return (dest);
}
