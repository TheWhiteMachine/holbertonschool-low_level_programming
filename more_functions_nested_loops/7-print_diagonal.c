#include "main.h"

/**
 * jack_bauer - check if a char is alphanumeric
 * Return: On lowwer 1 in not lower 0
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_diagonal(int n)
{	
	int i, o;

	for (o = 0; o < n; o++)
	{
		for (i = 0; i > (n - 1); i ++)
		{
		if (i !=0)
			_putchar(32);
		}
		if (n !=0)
			_putchar(92);
	}
}
