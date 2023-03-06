#include "main.h"

/**
 * square - calcs factorial of an int
 * Return: -1 if doestn have square or the s root of n
 * @x: an int to pow till n
 * @n: int to find its sqare root
 */

int square(int x, int n)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	return (square(x + 1, n));
}


/**
 * _sqrt_recursion - calcs factorial of an int
 * Return: -1 if doestn have square or the s root of n
 * @n: an int to find sqare root
 */


int _sqrt_recursion(int n)
{
	return (square(1, n));
}
