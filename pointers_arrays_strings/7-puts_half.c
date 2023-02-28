#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half of a string
 * @str: a string
 */
void puts_half(char *str)
{
	int t, half;

	t = 0;

	while (str[t])
	{
	t++;
	}
	if ((t % 2) != 0)
	{
		t -= 1;
	       	half = t / 2;
		for (; half <= (t - 1); half++)
		{
		_putchar(str[half]);
		}
	}
	else
	{
		half = t / 2;
	}
	for (; half <= (t - 1); half++)
	{
	_putchar(str[half]);
	}
	_putchar('\n');
}
