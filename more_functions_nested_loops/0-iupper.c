#include "main.h"

/**
 * _isupper' - check the code.
 *
 * Return: 1 for uppercase and 'c'c to not.
 * @c: an integer number
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
	{
		c = c + '0';
		return (0);
	}
}
