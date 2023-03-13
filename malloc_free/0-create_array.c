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

	unsigned int i = 0;
	char *ch;


	if (size == 0)
		return (NULL);

	ch = malloc(sizeof(c) * size);

	if (ch == NULL)
		return (NULL);

	while (i < size)
	{
		ch[i] = c;
		i++;
	}

	ch[i] = '\0';

	return (ch);

}
