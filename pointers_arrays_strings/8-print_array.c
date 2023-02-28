#include "main.h"
#include <stdio.h>
/**
 * print_array - print a string till a given n.
 * @n: an integer.
 * @a: a string.
 */
void print_array(int *a, int n)
{
	int i = 0;
	for (i = 0; i <= n; i++)
	{
		printf("%d, ",a[i]);
	}

}
