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
		for (j = 0; j <= n; j++)
		{
		src[j] = dest[j];
		}
		while (src[i])
		{
		dest[i] = src[i];
		i += 1;
		}
	}
	return (dest);
}
