#include "main.h"

/**
 * print_triangle - check if a char is alphanumeric
 * @size: integer 
 */

void print_triangle(int size)
{
	int i, sp, ch, size_sp, size_ch;
	size_sp = size - 1;
	size_ch = size - size_sp;
	sp = 0;
	ch = 0;

	if ( size != 0 && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (sp = 0; sp <= size_sp; sp++)
			{
			putchar(32);
			}
			for (ch = 0; ch < size_ch; ch++)
			{
			putchar('#');
			}
		size_sp -= 1;
		size_ch += 1;
		putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
