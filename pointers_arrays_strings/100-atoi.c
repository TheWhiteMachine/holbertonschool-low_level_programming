#include "main.h"

/**
 * _atoi - check the code
 * @s: a string of characters
 * Return: an integer with numbers found.
 */
int _atoi(char *s)
{
	int j = 0,
	    num = 0,
	    signs = 0;


	while (s[j])
	{
		if (s[j] >= '0' && s[j] <= '9')
		{
			num = (num * 10) + s[j] - '0';

			if (s[j + 1]  < '0' || s[j +1 i] > '9' || s[j + 1] == '\0')
				break;
		}
		if (s[j] == '-')
			signs++;
	j++;
	}

	if (signs % 2 == 0)
		return (num);
	else
		return (-num);
}
