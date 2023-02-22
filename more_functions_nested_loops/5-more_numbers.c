#include "main.h"
#include <unistd.h>

/**
 * more_numbers - check the code.
 *
 */

void more_numbers(void)
{
	int i, o;
	int first, last, result;

	for (o = 0; o <= 10; o++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
			first = '0' + (i / 10);
			last = '0' + (i % 10);
			result = first + last;
			_putchar (result);
			}
			else
			{
			_putchar ('0' + i);
			}
		}
		_putchar('\n');
	}
}
