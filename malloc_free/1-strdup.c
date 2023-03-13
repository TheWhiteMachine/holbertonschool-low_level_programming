#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate a string in alloc memory
 *
 * Return: 1 a pinter to dulplicated string
 * @str: a string to duplicate
 */

char *_strdup(char *str)
{
	unsigned int i = 0,
		     len = 0;
	char *string;

	if (str == NULL)
		return (0);

	while (str[len] != '\0')
		len++;

	string = malloc(sizeof(char) * (len + 1));

	if (string == NULL)
		return (NULL);

	while (i < len)
	{
		string[i] = str[i];
		i++;
	}

	string[i] = '\0';

	return (string);
}
