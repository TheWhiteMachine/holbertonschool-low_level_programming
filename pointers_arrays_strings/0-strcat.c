#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	char buff[200];
	int i = 0,
	    j = 0,
	    x = 0;

	for (; dest[i] != '\0'; i++)
	{
		buff[i] = dest[i];
	}
	i += 1;
	for (j = 0; src[j] != '\0'; j++)
	{
		buff[i] = src[j];
		i += 1;
	}
	for (x = 0; src[x] != '\0'; x++)
	{
		src[x] = dest[x];
	}
	*buff = *dest;
	return (dest);
}
