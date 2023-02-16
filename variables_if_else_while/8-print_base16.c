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
	}
	for (n = 97; n < 103; n++)
	{
	putchar(n);
	}
	putchar('\n');
	return (0);
}
