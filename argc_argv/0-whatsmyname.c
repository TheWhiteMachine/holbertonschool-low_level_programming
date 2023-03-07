#include <stdio>

/**
 * mynameis - print its name
 *
 * Return: 
 * @argc cout or arguments
 * @argv: pointer to a array of the arguments
 */
int main(int argc, char **argv)
{
	printf("%s",*argv[0]);
	return(0);
}
