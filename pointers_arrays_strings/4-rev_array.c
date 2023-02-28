#include "main.h"
#include <stdio.h>
/**
 * reverse_array - revert an array
 * @a: a array of ints
 * @n: int size of array
 */
void reverse_array(int *a, int n)
{
	int b[100];
	int i = 0,
	    j = n - 1;

	while (a[j])
	{
		b[i] = a[j];
		i += 1;
		j -= 1;
	}
	b[n] = '\0';
	*a = *b;
}
