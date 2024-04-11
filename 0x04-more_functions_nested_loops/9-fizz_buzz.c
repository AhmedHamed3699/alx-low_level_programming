#include <stdio.h>

/**
 * main - code entry
 * implementation of the Fizz-Buzz test
 *
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if (i % 3 && i % 5)
			printf("%d", i);
		putchar(' ');
	}
	printf("Buzz\n");
	return (0);
}
