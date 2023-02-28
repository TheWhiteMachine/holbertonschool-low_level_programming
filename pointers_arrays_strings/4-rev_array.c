#include "main.h"
#include <stdio.h>
/**
 * reverse_array - revert an array
 * @a: a array of ints
 * @n: int size of array
 */
void reverse_array(int *a, int n)
{
	int b[1000];
	int i = 0,
	    x = 0,
	    j = n - 1;

	while (n > 0 && a[j])
	{
		for (; x == n / 2; x++)
		{	
		a[i] = b[i];
		a[i] = a[j];
		a[j] = b[i];
		i += 1;
		j -= 1;
		}
	}

}
