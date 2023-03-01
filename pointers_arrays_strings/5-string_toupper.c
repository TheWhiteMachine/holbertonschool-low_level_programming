#include "main.h"
/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @c: a string.
 *
 * Return: pointer to string with upper letters.
 */

char *string_toupper(char *c)
{
	int i = 0;
	int n = 0;

	while (c[n])
	{
		n++;
	}

	for (; i <= n; i++)
	{
		if (c[i] >= 97 && c[i] <= 122)
		{
			c[i] = c[i] - 32;
		}
	}
	return (c);
}
