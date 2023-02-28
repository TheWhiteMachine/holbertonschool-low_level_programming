#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0,
	    j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		j += 1;
		i += 1;
	}

	dest[i] = '\0';
	
	return (dest);
}
