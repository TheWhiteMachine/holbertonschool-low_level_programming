#include "main.h"
/**
 * _strchr - search for a char in a string
 * @c: c a char to find.
 * @s: a string where to search
 * Return: pointer to first char occurrence.
 */
char *_strchr(char *s, char c)
{
	int i = 1;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
