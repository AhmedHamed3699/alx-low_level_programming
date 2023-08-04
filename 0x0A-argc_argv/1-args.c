#include <stdio.h>

/**
 * main - program entry
 * prints the number of arguments passed into it
 * @argc: number of arguments passed to program
 * @argv: array of all arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%i\n", argc - 1);
	return (0);
}
