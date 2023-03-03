#include <stdio.h>
#include "main.h"
/**
 * void print_diagsums - prints the sum of matrix diagonal
 *
 * @a: string of a strings of int
 * @size: int for the size of matrix
 */
void print_diagsums(int *a, int size)
{
	int d1 = 0,
	    d2 = 0;
	int i;


	for (i = 0; i < size; i++)
	{
		d1 += a[i];
		a += size;
	}
	a -= size;
	for (i = 0; i < size; i++)
	{
		d2 += a[i];
		a -= size;
	}
	printf("%d,%d\n", d1, d2);
}
