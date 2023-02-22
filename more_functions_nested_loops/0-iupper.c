#include "main.h"

/**
 * _isupper' - check the code.
 *
 * Return: 1 for uppercase and 'c'c to not.
 * @c: an integer number
 */
int _isupper(int c)
{
	c = c - '0';

	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
