#include <stdio.h>
/**
 * _strcmp - compare two strings.
 *
 * Return: positve or negative diference bt s2 and s1 or 0 on equals
 * @s1: destiny string
 * @s2: source string.
 */

int _strcmp(char *s1, char *s2)
{
	int i1 = 0;
	int i2 = 0;
	int chv1 = 0;
	int chv2 = 0;

	while (s1[i1])
	{
		chv1 += s1[i1] + '0';
	}

	while (s2[i2])
	{
		chv2 += s2[i2] + '0';
	}

	if (chv1 == chv2)
	{
		return (0);
	}
	else
	{
		return (chv2 - chv1);
	}
}
