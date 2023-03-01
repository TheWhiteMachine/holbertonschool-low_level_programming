#include "main.h"
/**
 * leet - encode in 1337.
 * @c: a string to encode.
 *
 * Return: pointer to encoded string.
 */
char *leet(char *c)
{
	int i = 0;

	while (c[i])
	{
		if (c[i] == 'a' || c[i] == 'A')
		{
			c[i] = 4 + '0';
		}

		if (c[i] == 101 || c[i] == 69)
		{
			c[i] = 3 + '0';
		}

		if (c[i] == 'o' || c[i] == 'O')
		{
			c[i] = 0 + '0';
		}

		if (c[i] == 't' || c[i] == 'T')
		{
			c[i] = 7 + '0';
		}

		if (c[i] == 'a' || c[i] == 'A')
		{
			c[i] = 1 + '0';
		}
		i++;
	}
	return (c);
}
