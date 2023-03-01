#include <stdio.h>
/**
 * cap_string - capitalize words on a stringr.
 *
 * Return: return poiinter of original string
 * @s: a string
 */
char *cap_string(char *s)
{
	int i = 1;

	if (s[0] >= 97 && s[0] <= 122)
	{
		s[0] -= 32;
	}
	while (s[i])
	{
		if (s[i] == '!' || s[i] == '?' || s[i] == '"')
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] -= 32;
			}
		}
		if (s[i] == ',' || s[i] == ';' || s[i] == '\t' || s[i] == '.') 
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] -= 32;
			}
		}
		if (s[i] == '"' || s[i] == '(' || s[i] == ',' || s[i] == ')')
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] -= 32;
			}
		}
			if (s[i] == ',' || s[i] == '{' || s[i] == 32 || s[i] == '.' || s[i] == '\n')
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] -= 32;
			}
		}
	i++;
	}
	return (s);
}
