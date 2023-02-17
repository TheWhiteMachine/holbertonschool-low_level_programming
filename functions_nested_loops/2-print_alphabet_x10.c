#include "main.h"

/**
 * print_alphabet_x10 - writes the alphabet
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet_x10(void);
{
        int  c = 97;
	for (int i; i >= 10; i++)
	{
        for (; c < 123; c++)
        {
        _putchar (c);
        }	
        _putchar ('\n');
	}
        _putchar ('\n');
}
