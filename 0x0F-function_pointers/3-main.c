#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - program entry point
 * @ac: arguments counter
 * @av: arguments vector
 *
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int a, b;
	int (*op_func)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(av[1]);
	b = atoi(av[3]);
	op_func = get_op_func(av[2]);
	if (op_func == NULL || av[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", op_func(a, b));
	return (0);
}
