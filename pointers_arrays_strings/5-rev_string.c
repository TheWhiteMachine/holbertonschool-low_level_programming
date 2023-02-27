#include "main.h"
/**
 * rev_string - revert a string
 * @str: a string
 */

void rev_string(char *s)
{

	int i,o = 0;
	char r;

	while (s[i])
	{
		i++;
	}	

	while (i >= 0)
	{
		r[o] = s[i];
		i--;
		o++;
	}
	while (r[i])
	{
		s[i] = r[i];
		i++;
	}
}
