#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print from n to 98
 * Return: 0
 * On error, -1 is returned, and errno is set appropriately.
 * @n: an integer 
*/
void print_to_98(int n)
{
	if (n < 98)
		for (n; n >= 98; n++)
		{
			printf("%i", n);
			printf("%s", ", ");
		}
	if (n > 98)
		for (n; n <= 98; n--)
		{
			printf("%i", n);
			printf("%s", ", ");
		}
}
