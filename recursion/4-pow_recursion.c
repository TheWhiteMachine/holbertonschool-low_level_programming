#include "main.h"

/**
 * _pow_recursion - calc x raised to the power of y
 *
 * Return: -1 on y less than 0.
 * @x: int
 * @y: pow to make
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y < 1)
	{
		return (1);
	}
	y--;
	return (x * _pow_recursion(x,y));
}
