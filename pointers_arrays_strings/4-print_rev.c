#include "main.h"
/**
 * _print_rev - prints a string in reverse
 * @s: a string
 */
void print_rev(char *s)
{
	int last = 0;

	while (s[last])
	{
	last++;
	}
	Last += 1;
	while (last >= 0)
	{
		_putchar(s[last]);
		last--;
	}
	_putchar('\n');
}
