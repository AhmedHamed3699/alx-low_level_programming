#include <stdio.h>
#include <stdlib.h>
/**
 * main - program start point
 * @ac: arguments count
 * @av: arguments vector
 *
 * Return: Always 0
 */
int main(int ac, char **av)
{
	int nb, i;
	int (*ptr_main)(int, char**) = &main;
	unsigned char *opcode = (unsigned char *)ptr_main;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}
	nb = atoi(av[1]);
	if (nb < 0)
	{
		printf("Error\n");
		exit(2);
	}
	i = 0;
	while (i < nb)
	{
		if (i == nb - 1)
			printf("%02x\n", opcode[i]);
		else
			printf("%02x ", opcode[i]);
		i++;
	}

	return (0);
}
