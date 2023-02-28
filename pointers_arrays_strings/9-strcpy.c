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
	int j = 0;

	do
	{
		dest[j] = src[j];
		j++;
	} while (src[j] != '\0');

	return (dest);
}

