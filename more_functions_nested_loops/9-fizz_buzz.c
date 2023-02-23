#include "main.h"

/**
 * print_digonal - check if a char is alphanumeric
 */

void main(void)
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

}

