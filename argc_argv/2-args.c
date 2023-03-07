#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all the arguments of program
 * Return: Always 0
 * @argc: counts arguments of program
 * @argv: pointer to a array with the arguments
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
