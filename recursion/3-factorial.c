#include "main.h"

/**
 * factorial - calc factorial of an int
 *
 * Return: Factorial of n
 * @n: an int
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));

}
