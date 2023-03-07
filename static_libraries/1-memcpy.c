#include "main.h"
/**
 * _memcpy - encode in 1337.
 * @dest: Destiny string.
 * @src: Source string.
 * @n: an unsigned n integer says elements to copy
 *
 * Return: pointer to encoded string.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i <= n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

