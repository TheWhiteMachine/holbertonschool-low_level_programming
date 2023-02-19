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
	int numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int r = 0;


	for (t = 0; t < 10; t++)
	{
		for (x = 0; x < 10; x++)
		{
			r = x * numbers[y];
			if (r > 9)
			{
				_putchar(' ');
				_putchar('0' + (r / 10));
				_putchar('0' + (r % 10));
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + r);
			}
			if (x != 9)
				_putchar(',');
		}
		y += 1;
		_putchar('\n');
	}
}
