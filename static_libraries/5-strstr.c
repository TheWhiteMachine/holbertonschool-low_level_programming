#include "main.h"
/**
 * _strstr -  gets the length of a prefix substring.
 *
 * Return: a pointer to where is found a string
 * @haystack: a string where to search
 * @needle: a string to search
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;

			} while (haystack[i] == needle[i]);
		}

		haystack++;
	}

	return ('\0');
}
