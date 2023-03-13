#include "main.h"
#include <stdlib.h>

/**
 * create_array - allocate memory to create an array.
 *
 * Return: a pointer to the array 0 on size 0 NULL if fails
 * @size: unsigned int
 * @c: an array of eihar
 */

char *create_array(unsigned int size, char c)
{
	
	char *p = malloc(sizeof(c) * size);
	unsigned int i = 0;

	if (size == 0)
		return('\0');

	while (*p)
	{
		for (; i < size - 1;i++)
		{
		p[i] = c;
		}
		return (p);
	}
	return ('\0');

}
