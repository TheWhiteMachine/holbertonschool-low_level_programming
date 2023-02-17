#include "main.h"

/**
 * jack_bauer - check if a char is alphanumeric
 * Return: On lowwer 1 in not lower 0
 * On error, -1 is returned, and errno is set appropriately.
 * @c : char
 */

void jack_bauer(void)
{
	int m;
	int md;
	int h;
	int hd;
	int cicles;

	for (cicles = 0; cicles < 3; cicles++)
	{
	_putchar(hd * '0');
	_putchar(h * '0');
	_putchar(58);
	_putchar(md * '0');
	_putchar(m * '0');
	_putchar('\n');
	for (m = 0; m < 9; m++)
	{
		if (m > 9)
		{
			md += 1;
			m = 0;
		}
		if (md > 5)
		{
			h += 1;
			md = 0;
		}
		if (h > 12)
		{
			hd += 1;
			h = 0;
		}
	}
	}

}
