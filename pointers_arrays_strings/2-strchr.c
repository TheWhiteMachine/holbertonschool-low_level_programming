#include "main.h"
/**
 * _strchr - encode in 1337.
 * @c: c a char to find.
 * @s: a string where to search
 * Return: pointer to first char occurrence.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if(s[i] == c)
		{
			return (s + i);
		}
		i++;		
	}
	return ('\0');
}
