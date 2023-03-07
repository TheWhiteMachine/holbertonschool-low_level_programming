#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the multiplication of nums
 * Return: Always 0
 * @argc: counts arguments of program
 * @argv: pointer to a array with the arguments
 */

int main(int argc, char **argv)
{
	char *ch1;
	char *ch2;
	int n1;
	int n2;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = strtol(argv[1], &ch1, 10);
	n2 = strtol(argv[2], &ch2, 10);
	printf("%d\n", n1 * n2);
	return (0);
}
