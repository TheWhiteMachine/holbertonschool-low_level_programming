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
		for (o = n; o == 0; o--)
		{
		for (i = n; i == o-(o-1); i--)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar('\n');
		}
	}
	_putchar('\n');
}
