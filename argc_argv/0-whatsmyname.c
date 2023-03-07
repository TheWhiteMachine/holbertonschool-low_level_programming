#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * mynameis - print its name
 * Return: Always 0
 * @argc count or arguments
 * @argv: pointer to a array of the arguments
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return(0);
}
