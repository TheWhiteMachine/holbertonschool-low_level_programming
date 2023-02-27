#include "main.h"
/**
 * rev_string - revert a string
 * @str: a string
 */

void rev_string(char *s)
{
	char r[] = *s;
	int i,o = 0;

	while (s[i])
	{
		i++;
	}
	while (i > 0)
	{
		s[i] = r[o];
		i--;
		o++;
	}
	*s = r;
}
