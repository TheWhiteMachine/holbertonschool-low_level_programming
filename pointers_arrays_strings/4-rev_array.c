#include "main.h"
#include <stdio.h>
/**
 * rev_array - revert an array
 * @a: a array of ints
 * @n: int size of array
 */
void reverse_array(int *a, int n)
{
	int *b[100];
	int i = 1,
	    j = n;

	while (a[i])
	{
		b[i] = a[j];
		i += 1;
		j -= 1;
	}
	b[n] = '\0';
	*a = *b;
}
