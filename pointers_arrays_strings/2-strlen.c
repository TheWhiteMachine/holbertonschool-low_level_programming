#include "main.h"
#include <stdio.h>
/**
 * _strlen - returns the lenght
 *
 * Return: the lenght of the string in the input
 * @s: a string.
 */

int _strlen(char *s)
{
	int i;

	for (i = 1; s[i] == '\0'; i++);
	

	return (i - 1);
}
