#include <stdio.h>

/**
 * main - program entry
 * it prints the name of the program
 * @argc: number of arguments passed to program
 * @argv: array of all arguments
 *
 * Return: always 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
