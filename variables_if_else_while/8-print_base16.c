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
	int n = 0;

	for (; n < 10; n++)
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
