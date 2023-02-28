#include "main.h"
#include <stdio.h>
/**
 * puts2 - print ever other element of a stirng
 * @str:  a string
 */
void puts2(char *str)
{
	int i, n, half
	i = 0;

	while (str[i])
	{
		i++;
	}
	i -= 1;
	if ((i % 2) == 1)
	{
		half = (i - 1) / 2;
	}
	else
	{
		half = half / 2;
	}
	half -= 1;
	for (n = half; n < i; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
