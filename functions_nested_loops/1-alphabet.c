#include "main.h"

/**
 * _print_alphabet - writes the alphabet
 * @c: The character to print in int from the a char
 *
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
