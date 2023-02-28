#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half of a string
 * @str: a string
 */
void puts2(char *str)
{
        int t, half;
 	t = 0;

        while (str[t])
        {
                t++;
        }
        t -= 1;
        if ((t % 2) != 0)
        {
                half = (t-1) / 1;
        }
        else
        {
                half = half / 2;
        }
        for (; half < t; half++)
        {
                _putchar(str[half]);
	}
	_putchar('\n');
}
