#include "main.h"
#include <stdio.h>
/**
 * reverse_array - revert an array
 * @a: a array of ints
 * @n: int size of array
 */
void reverse_array(int *a, int n)
{
	int tmp, start = 0;
	int end = n - 1; 

	while (start < end)
	{
		tmp = *(a + start);
		*(a + start) = *(a + end);
		*(a + end) = tmp;
		start++, end--;
	}
}
