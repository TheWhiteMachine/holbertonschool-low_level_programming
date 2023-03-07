#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print its name
 * Return: Always 0
 * @argc: counts arguments of program
 * @argv: pointer to a array with the arguments
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
