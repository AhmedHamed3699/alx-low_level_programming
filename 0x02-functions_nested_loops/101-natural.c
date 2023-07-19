#include <stdio.h>

/**
 * main - entry point
 * prints the sum of all multiples of 5 or 3
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%i\n", sum);
	return (0);
}
