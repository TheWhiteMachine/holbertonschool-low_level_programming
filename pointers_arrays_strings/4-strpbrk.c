#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes. 
 *
 * @s: segment to return bytes from
 * @accept: the bytes to include
 *
 * Return: a pointer to the byte in s that matches accept or NULL
 * of bytes from @accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}

