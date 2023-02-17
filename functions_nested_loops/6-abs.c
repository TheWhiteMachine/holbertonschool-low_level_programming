#include "main.h"

/**
 * _abs - check if a char is alphanumeric
 * Return: On lowwer 1 in not lower 0
 * On error, -1 is returned, and errno is set appropriately.
 * @int : int
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	if (n == 0)
		return (n);
	return (n);
}
