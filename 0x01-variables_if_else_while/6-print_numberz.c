#include <stdio.h>

/**
 * main - Entry point
 * program that prints numbers of base 10 from 0 to 10
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
