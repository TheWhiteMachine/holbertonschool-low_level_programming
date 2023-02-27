#include "main.h"

/**
 * swap_int - swap the content of to variables using pinters
 *
 * @a: an integer.
 * @b: an integer.
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
