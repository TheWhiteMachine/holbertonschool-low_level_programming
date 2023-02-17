#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * Return: alwayes 0
 * @n : an int
 */
int print_last_digit(int n)
{
	int r = n % 10;

	if (r < 0)
		r *= -1;
	
	_putchar (r + '0');

	return (r);
}
