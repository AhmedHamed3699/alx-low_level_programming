#include <stdio.h>

/**
 * main - program entry
 * prints all arguments it receives
 * @argc: number of arguments passed to program
 * @argv: array of all arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
