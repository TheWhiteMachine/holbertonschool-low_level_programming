#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Print the Alphabet
*/
int main(void)
{
	int  c = 122;

	for (; c >= 97; c--)
	{
	putchar (c);
	}
	putchar ('\n');
	return (0);
}
