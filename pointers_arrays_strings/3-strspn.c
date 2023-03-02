#include <stdio.h>
/**
 * _strspn -  gets the length of a prefix substring.
 *
 * Return: number of byte of a prefix substing
 * @s: string
 * @accept: char
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
			if (s[n] == accept[i])
			{
				b++;
				accept[i] = '\0';
				break;
			}
		}
		n++;
	}

	return (b);
}
