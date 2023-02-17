#include "main.h"

/**
 * times_table - check if a char is alphanumeric
 * Return: On lowwer 1 in not lower 0
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{
	int n = 0;
	int t = 0;
	int r = 0;

	for (n = 0; n < 11; n++)
	{
		for (t = 0; t < 11; t++)
		{
			r = t * n;
			if (r > 9)
				_putchar('0' + (r % 10));
			else
				_putchar('0' + r);
			_putchar(',');
		}
		_putchar('\n');
	}
}
