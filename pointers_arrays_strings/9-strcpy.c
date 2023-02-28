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
	char temp = *src;
	*dest = temp;
	return (temp);
}

