#include "main.h"

/**
 * main - check the code.
 *
 * Return: 1 for uppercase and 'c'c to not.
 * @c: an integer number
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else return (c);
	return (0);
}
