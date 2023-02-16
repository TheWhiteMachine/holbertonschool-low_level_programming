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
	int  c = 97;

	for (; c < 123; c++)
	{
	if (c != 101 || c != 113)
		{
		putchar (c);
		}
	}
	putchar ('\n');
	return (0);
}
