#include <stdio.h>

/**
 * main - entry point
 * prints even-valued terms of the Fibonacci numbers
 *
 * Return: always 0 (success)
 */
int main(void)
{
	unsigned long int f1, f2, f, sum;

	f1 = 0;
	f2 = 1;
	f = 1;
	sum = 0;
	while (f <= 4000000)
	{
		if (f % 2 == 0)
			sum += f;
		f = f1 + f2;
		f1 = f2;
		f2 = f;
	}
	printf("%lu\n", sum);
	return (0);
}
