#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes. 
 *
 * @s: segment to return bytes from
 * @accept: the bytes to include
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found
 * of bytes from @accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					c++;
			}
		}
		else
			return (*s);

	}
	return (*s);

}

