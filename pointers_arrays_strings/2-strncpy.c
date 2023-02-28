#include "main.h"

/**
 * _strncpy - copy seccond string n characters into first
 *
 * Return: dest.
 * @dest: string
 * @src: seccond string
 * @n: integer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;	
	
	if (src[i] != '\0')
	{
	i += n;
	while (s[j])
	{
		dest[i] = src[j];
		j += 1;
		i += 1;
	}

	dest[i] = '\0';
	}
	return (dest);
}
