#include "main.h"

/**
 * _memset - save a constant byte in memory pointed
 * @s: a string pointer
 * @b: a char to fill with
 * @n: limit to fill the memory
 *
 * Return: s a reult of the write
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i <= n - 1)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
