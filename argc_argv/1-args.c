#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the number of arguments
 * Return: Always 0
 * @argc: counts arguments of program
 * @argv: pointer to a array with the arguments
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%i\n", argc - 1);
	return (0);
}
