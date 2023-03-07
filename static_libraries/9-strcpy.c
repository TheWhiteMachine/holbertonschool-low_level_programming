#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copy string pinters
 *
 * Return: return dest string
 * @dest: destiny string
 * @src: source string.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

