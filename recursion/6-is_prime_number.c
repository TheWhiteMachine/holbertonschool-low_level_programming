/**
 * test -  test if a number is prime
 *
 * Return: 1 on prime en 0 if not
 * @n: the number in int
 * @div: a divisor number to check
 */

int test(int n, int div)
{

	if (n < 2)
	{
		return (0);
	}
	if (div == 1)
	{
		return (1);
	}
	if (n % div == 0)
	{
		return (0);
	}
	return (test(n, div - 1));
}


#include "main.h"


/**
 * is_prime_number - ask a function if a number is prime
 *
 * Return: 1 on prime en 0 if not
 * @n: the number in int
 */

int is_prime_number(int n)
{
	return (test(n, n - 1));
}
