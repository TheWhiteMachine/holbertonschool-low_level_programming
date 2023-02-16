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
	int n = 48;

	for (; n < 58; n++)
	{
	putchar(n);
	if (n != 57)
	{
		putchar(44);
	}
	}
	putchar('\n');
	return (0);
}
