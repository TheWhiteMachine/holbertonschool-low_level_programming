#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Print the Alphabets lower and uppercase
*/
int main(void)
{
i	int  c = 97;

	for (; c < 123; c++)
	{
	putchar (c);
	}
	for (c = 65; c < 91; c++)
	{
	putchar (c)
	}
	putchar ('\n');
	return (0);
}
