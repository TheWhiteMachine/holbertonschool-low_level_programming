#include "main.h"
/**
 * rev_string - revert a string
 * @str: a string
 */

void rev_string(char *s)
{

	int i,o = 0;

	while (s[i])
	{
		i++;
	}	

	char r[] = *s;

	while (i >= 0)
	{
		r[o] = s[s];
		i--;
		o++;
	}
	while (r[i])
	{
		s[i] = r[i];
		i++;
	}
}
