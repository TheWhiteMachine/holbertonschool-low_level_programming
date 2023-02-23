#include "main.h"

/**
 * print_digonal - check if a char is alphanumeric
 * @n: integer 
 */

void print_diagonal(int n)
{	
	int i, o;

	if (n != 0 && n > 0)
	{
		for (o = n;o == n; o--)
		{
			for (; n-o; i++)
			{
			_putchar(92);
			}
		}
	}
	_putchar('\n');
}
