#include "main.h"

/**
 * _isalpha - check if a char is alphanumeric
 * Return: On lowwer 1 in not lower 0
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{
	int n;
	int t;
	int r;

	for (n = 0; n < 11; n++)
	{
		for (t = 0; t < 11; t++)
		{
			r = t * 9;
			_putchar('0' +  r);
			_putchar(',');
		}
		_putchar('\n');
	}
}
