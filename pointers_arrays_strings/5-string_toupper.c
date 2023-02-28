#include "main.h"

/**
 * string_toupper - change to uppercase all letters from a stirn
 *
 * Return: c.
 * @c: a string of char.
 */
char *string_toupper(char *)
{
	char c, aux;
	int i = 0;

	for (i; c[i] == '\0'; i++)
	{
		if (c[i] >= 97 && c <= 122)
		{
			aux = (c[i] - '0') - 32;
			c[i] = aux;
		}
	}
	return (c);
}
