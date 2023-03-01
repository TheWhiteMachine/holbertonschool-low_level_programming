#include "main.h"
/**
 * leet - encode in 1337.
 * @c: a string to encode.
 *
 * Return: pointer to encoded string.
 */
char *leet(char *c)
{
	int i = 0,
	    n = 0;
	char key[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char code[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (c[i] != '\0')
	{
		for (n = 0; n <= 9; n++)
		{
			if (c[i] == code[n])
			{
				c[i] = key[n];
			}
		}
		i++;
	}
	return (c);
}
