#include "main.h"
/**
 * rev_string - revert a string
 * @str: a string
 */

void rev_string(char *s)
{

	int i,o = 0;
	char r[100];
	
	while (s[i])
	{
		r[i] = s[i];
		i++;
	}	
	i -= 2;
	while (i >= 0)
	{
		r[o] = s[i];
		i--;
		o++;
	}
	o -= 2;
	while (r[i])
	{
		s[i] = r[i];
		i++;
	}
}
