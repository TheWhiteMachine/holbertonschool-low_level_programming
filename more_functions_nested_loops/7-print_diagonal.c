#include "main.h"

/**
 * print_digonal - check if a char is alphanumeric
 * @n: integer 
 */

void print_diagonal(int n)
{	
	int i, o, steps;

	if (n != 0 && n > 0)
	{
	steps = n;
		for (i = 0; i < n; i++)
		{
		for (o = n; n - o; o--)
			{
			_putchar(32);
			steps = n - o;
			}
		_putchar(92);
		_putchar('\n');
		}
	}
	_putchar('\n');
}
