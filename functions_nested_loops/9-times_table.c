#include "main.h"

/**
 * times_table - check if a char is alphanumeric
 * Return: On lowwer 1 in not lower 0
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{
	int x = 0;
	int y = 0;
	int t = 0;
	int r = 0;


	for (t = 0;t < 11; t++)
	{
		for (y = 0; y < 11; y++)
		{	
		for (x = 0; x < 11; x++)
		{
			r = x * y;
			if (r > 9)
				_putchar('0' + (r % 10));
			else
				_putchar('0' + r);
			_putchar(',');
		}
		_putchar('\n');
		}
	}
}
