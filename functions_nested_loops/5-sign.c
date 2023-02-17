#includ "main.h"

/**
 * print_sign - check the sign of a number
 * Return: On lowwer 1 in not lower 0
 * On error, -1 is returned, and errno is set appropriately.
 * @n : int
 */

int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		_putchar (43);
		return (1);
	}
	if (n == 0)
	{
		_putchar (48);
		return (0);
	}
	if (n < 0)
	{
		_putchar (45);
		return (-1);
	}
}
