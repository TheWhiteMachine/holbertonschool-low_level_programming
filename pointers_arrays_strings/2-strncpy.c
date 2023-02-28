#include "main.h"

/**
 * _strcat - concat seccond string into first
 *
 * Return: dest.
 * @dest: string
 * @src: seccond string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;	
	
	if (src[i] != '\0')
	{
	while (j <= (n - 1))
	{
		dest[i] = src[j];
		j += 1;
		i += 1;
	}

	dest[i] = '\0';
	}
	return (dest);
}
