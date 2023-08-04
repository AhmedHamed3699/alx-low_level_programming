#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program entry
 * adds positive numbers
 * @argc: number of arguments passed to program
 * @argv: array of all arguments
 *
 * Return: 0 if all arguments are digits
 * 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i, j, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (isdigit(argv[i][j]))
			j++;
		if (argv[i][j] != '\0')
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%i\n", sum);
	return (0);
}
