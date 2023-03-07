#include "main.h"

/**
 * _isalpha - check if a char is alphanumeric
 * Return: On lowwer 1 in not lower 0
 * On error, -1 is returned, and errno is set appropriately.
 * @c : char
 */

int _isalpha(int c)
{
	int r;

	if (c > 96 && c < 123)
		r = 1;
	else if (c > 64 && c < 91)
		r = 1;
	else if (c > 47 && c < 56)
		r = 1;
	else
	       r = 0;
	return (r);
}
