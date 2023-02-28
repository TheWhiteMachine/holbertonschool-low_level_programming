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
	int j = 0;

	if (src[j] && n < sizeof(str))
	{
		for (j = 0; j < n; j++)
		{
		dest[j] = src[j];
		}
	}
	return (dest);
}
