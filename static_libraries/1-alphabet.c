#include "main.h"

/**
 * print_alphabet - writes the alphabet
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet(void)
{
	int  c = 97;

	for (; c < 123; c++)
	{
	_putchar (c);
	}
	_putchar ('\n');
}
