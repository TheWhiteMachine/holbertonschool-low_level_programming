#include "main.h"

/**
 * print_alphabet_x10 - writes the alphabet
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/
void print_alphabet_x10(void)
{
	int c = 97;

	int i = 0;

	for (; i <= 10; i++)
	{
		for (; c < 123; c++)
		{
		_putchar (c);
		}
		if (c == 121)
		{
		c = 97;
		}
	_putchar ('\n');
	}
}
