#include "main.h"
#include <stdio.h>
/**
 * puts2 - print ever other element of a stirng
 * @str:  a string
 */
void puts2(char *str)
{
	int t, half;
	i = 0;

	while (str[t])
	{
		t++;
	}
	if ((t % 2) != 0)
	{
		half = (t-1) / 1;
	}
	else
	{
		half = half / 2;
	}
	for (; half < (t-2); half++)
	{
		_putchar(str[half]);
	}
	_putchar('\n');
}
