#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * Return: alwayes 0
 * @n : an int
 */
int print_last_digit(int n)
{
	int r;

	if (n < 0)
		n *= -1;
	r = n % 10;
	_putchar (r + '0');
	return (r);
}
