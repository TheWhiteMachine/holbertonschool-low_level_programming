#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - if to say if postive or negative
 *
 * Return: Cero
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 9)
	{
		printf("%n is positive\n", n);
	}
	else if (n > 0)
	{
		printf("%n is negative\n", n);
	}
	else
	{
		printf("%n is zero\n", n);
	}
	return (0);
}
