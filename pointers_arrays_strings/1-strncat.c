#include <stdio.h>
/**
 * _strncat - concat two strings till a gven n number.
 *
 * Return: return dest string
 * @dest: destiny string
 * @src: source string.
 * @n: integer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0,
	    j = 0;
	if (src[i] != '\0')
	{
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j <= (n - 1))
	{
		dest[i] = src[j];
		j += 1;
		i += 1;
	}

	dest[i] = '\0';
	}
	return (dest);
}
