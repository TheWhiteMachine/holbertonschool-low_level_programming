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

	for (; src[i] != '\n'; i++)
	{			
		dest[i] = src[i];
	}


	return (dest);
}

