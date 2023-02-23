#include "main.h"

/**
 * print_diagonal - check if a char is alphanumeric
 * @n: integer
 */

void print_diagonal(int n)
{
	int h, sp;

	sp = 0;

	if (n != 0 && n > 0)
	{
		for (h = 0; h < n; h++)
		{
		for (sp = 0; sp < h; sp++)
		{
			putchar(32);
		}
		putchar(92);
		putchar('\n');
		}
	}
	else
		putchar('\n');
}
