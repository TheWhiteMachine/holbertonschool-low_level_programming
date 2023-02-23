#include "main.h"

/**
 * Return - 0 always
 * main - check if a char is alphanumeric
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			printf("%s", "FizzBuzz ");
		else if ((i % 3) == 0)
		{
			printf("%s", "Fizz ");
		}
		else if ((i % 5) == 0)
		{
			printf("%s", "Buzz ");
		}
		else
			printf("%i ", i);
	}
	return (0);
}

