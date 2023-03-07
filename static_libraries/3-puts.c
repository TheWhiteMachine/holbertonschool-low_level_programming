#include "main.h"
/**
 * _puts - prints a string folloewed by a noew line
 * @str: a string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}


