#include <stdio.h>
/**
 * _strcmp - compare two strings.
 *
 * Return: positve or negative diference bt s2 and s1 or 0 on equals
 * @s1: destiny string
 * @s2: source string.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;
	int i,
	    n = 0;
		
	while (s[n])
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				b++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (b);
		}

		n++;
	}

	return (b);
}
