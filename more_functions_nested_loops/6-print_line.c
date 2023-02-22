#include "main.h"

/**
 * print_line - print a line at conosole.
 * @n: inteer
 */

void print_line(int n)
{
	int start;

	if (n != 0 && n > 0)
	{
		for (start = 0; start < n; start++)
		{
		_putchar('_');
		}
	}
	_putchar('\n');
}

