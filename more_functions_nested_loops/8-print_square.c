#include "main.h"

/**
 * print_square - print a sqare with a size input
 * @size: integer
 */

void print_square(int size)
{
	int x, y;

	if (size != 0 && size > 0)
	{
		for (y = 0; y < size; y++)
		{
			for (x = 0; x < size; x++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
