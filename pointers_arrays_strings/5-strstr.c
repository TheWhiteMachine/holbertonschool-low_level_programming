#include "main.h"
/**
 * _strstr -  gets the length of a prefix substring.
 *
 * Return: number of byte of a prefix substing
 * @haystack: a string where to search
 * @needle: a string to search
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0,
	    found = 0;

	while (*haystack)
	{
		while (*haystack == needle[i])
		{
			if (needle[i + 1])
			{
				return (haystack);
			}
		i++;
		}
		haystack++;
	}	
	return ('\0');	
}
