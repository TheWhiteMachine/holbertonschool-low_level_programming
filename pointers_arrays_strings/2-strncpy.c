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

	while (src[i])
	{i++}

	if (src[j] && n < i)
	{
		for (j = 0; j < n; j++)
		{
		dest[j] = src[j];
		}
	}
	return (dest);
}
