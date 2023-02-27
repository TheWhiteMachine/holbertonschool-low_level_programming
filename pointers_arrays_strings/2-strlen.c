#include "main.h"

/**
 * _strlen - returns the lenght
 *
 * Return: the lenght of the string in the input
 * @s: a string.
 */

int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
