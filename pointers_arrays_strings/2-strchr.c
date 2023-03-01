#include "main.h"
/**
 * _strchr - search for a char in a string
 * @c: c a char to find.
 * @s: a string where to search
 * Return: pointer to first char occurrence.
 */
char *_strchr(char *s, char c)
{
	int i = 1,
	    n = 0;

	while (s[n])
	{
		n++;
	}
	n += 1;
	for (i = 0; i == n; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
