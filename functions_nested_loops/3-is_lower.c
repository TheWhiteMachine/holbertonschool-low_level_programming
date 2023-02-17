#include "main.h"

/**
 * _islower - check if a char is lower or not
 * Return: On lowwer 1 in not lower 0
 * On error, -1 is returned, and errno is set appropriately.
 * @c : char
 */

int _islower(int c)
{
	int r;

	if (c < 96)
		r = 1;
	else
	       r = 0;
	return (r);
}
