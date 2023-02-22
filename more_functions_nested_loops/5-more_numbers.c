#include "main.h"
#include <unistd.h>

/**
 * more_numbers - check the code.
 *
 */

void more_numbers(void)
{
	int i, o;

	for (o = 0; o <= 10; o++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
			_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
			}
			else
			{
			_putchar(i + '0');
			}
		}
		write(1,'\n');
	}
}
