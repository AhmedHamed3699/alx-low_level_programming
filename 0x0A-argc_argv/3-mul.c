#include <stdio.h>
#include <stdlib.h>
/**
 * main - program entry
 * multiplies two numbers
 * @argc: number of arguments passed to program
 * @argv: array of all arguments
 *
 * Return: 0 if two argumnts passed to program
 * 1 otherwise
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
