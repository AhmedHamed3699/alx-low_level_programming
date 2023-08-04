#include <stdio.h>
#include <stdlib.h>
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
	int i, sum, tmp;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		tmp = atoi(argv[i]);
		if (tmp)
			sum += tmp;
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%i\n", sum);
	return (0);
}
