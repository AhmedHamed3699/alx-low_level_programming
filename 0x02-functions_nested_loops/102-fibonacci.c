#include <stdio.h>

/**
 * main - entry point
 * prints the first 50 Fibonacci numbers
 *
 * Return: always 0 (success)
 */
int main(void)
{
	unsigned long int f1, f2, f;
	int i;

	f1 = 0;
	f2 = 1;
	for (i = 1; i < 50; i++)
	{
		f = f1 + f2;
		f1 = f2;
		f2 = f;
		printf("%lu, ", f);
	}
	printf("%lu\n", f1 + f2);
	return (0);
}
