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
	char *pointer = NULL;

	while (*haystack)
	{
		if (*haystack == needle[0])
		{	
			pointer = haystack;
			for (i = 1; needle[i];i++)
			{
				if (*haystack == needle[i])
				{
					found = 1;
				}
					else 
				{
					pointer = NULL;
					found = 0;
				}
			}
		}
	}
	return (pointer);
}
