#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print from n to 98
 * On error, -1 is returned, and errno is set appropriately.
 * @n: an integer 
*/
void print_to_98(int n)
{
	int i;
	if (n == 98)
		printf("%i%s", n, " ");
	if (n < 98)
		for (i = n; i <= 98; i++)
		{
			printf("%i", i);
			if (i != 98)			
				printf("%s", ", ");
		}
	if (n > 98)
		for (i = n; i >= 98; i--)
		{
			printf("%i", i);
			if (i != 98)			
				printf("%s", ", ");
		}
	putchar('\n');
}
