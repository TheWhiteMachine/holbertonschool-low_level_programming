#include <stdlib.h>
#include <time.h>
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
		printf("is positive\n");
	}
	else if (n > 0)
	{
		printf("is negative\n");
	}
	else
	{
		printf("is zero\n");
	}
	return (0);
}
