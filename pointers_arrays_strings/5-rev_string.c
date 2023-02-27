#include "main.h"
#include <stdio.h>
/**
 * rev_string - revert a string
 * @s: a string
 */
void rev_string(char *s)
{

	int i = 0,
	o = 0;
	char r[600];

	while (s[i])
	{
	r[i] = s[i];
	i++;
	}
	i -= 1;
	while (i >= 0)
	{
		r[o] = s[i];
		i--;
		o++;
	}
	i += 1;
	while (r[i])
	{
	s[i] = r[i];
	i++;
	}
	*s = *r;
}
