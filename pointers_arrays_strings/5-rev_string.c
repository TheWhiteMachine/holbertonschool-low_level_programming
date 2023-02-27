#include "main.h"
/**
 * rev_string - revert a string
 * @str: a string
 */

void rev_string(char *s)
{

	int i,o = 0;

	char r = *s;

	while (s[i])
	{
		r[i] = s[i];
		i++;
	}	
	i -= 1;
	while (i >= 0)
	{
		s[i] = r[o];
		i--;
		o++;
	}
	while (r[i])
	{
		s[i] = r[i];
		i++;
	}
}
