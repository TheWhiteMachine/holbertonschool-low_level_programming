#include "main.h"
#include <stdio.h>
/**
 * puts2 - print ever other element of a stirng
 * @str:  a string
 */
void puts2(char *str)
{
	int i, n;

	i = 0;

	while (str[i])
	{
		i++;
	}
	for (n = 0; n < i; n++)
	{
		if ((n % 2) == 0)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
