#include <stdio.h>
/**
 * _strncat - concat two strings till a gven n number.
 *
 * Return: return dest string
 * @dest: destiny string
 * @src: source string.
 * @n: integer
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '"' || s[i] == '(' || s[i] == ',' || s[i] == ')' || s[i] == ',' || s[i] == '{' || s[i] == 32 || s[i] == '.' || s[i] == '\n')
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] -= 32;
			}

		}
	i++;
	}
}
