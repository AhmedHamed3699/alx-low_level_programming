#include <stdio.h>
#include <stdlib.h>
/**
 * main - program entry
 * prints the minimum number of coins
 * to make change for an amount of money
 *
 * @argc: number of arguments passed to program
 * @argv: array of all arguments
 *
 * Return: 1 if an error happend
 * 0 otherwise
 */
int main(int argc, char *argv[])
{
	int i, cnt, cents;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}

	cnt = 0;
	for (i = 0; i < 5; i++)
	{
		while (cents - coins[i] >= 0)
		{
			cents -= coins[i];
			cnt++;
		}
	}
	printf("%i\n", cnt);
	return (0);
}
