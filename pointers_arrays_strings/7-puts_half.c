#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half of a string
 * @str: a string
 */
void puts_half(char *str)
{
	int i, n, half;
	
	i = 0;
	n = 0;

	while (str[i])
	{
		i++;
	}
	i -= 1;
	if ((i % 2) == 0)
		half = i / 2;
	else
		half = (i - 1) / 2;
	for (n = half; n <= i; n++)
	{
	_putchar(str[n]);
	}
	_putchar('\n');
}
