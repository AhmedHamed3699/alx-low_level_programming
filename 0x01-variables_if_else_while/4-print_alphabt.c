#include <stdio.h>

/**
 * main - Entry point
 * program that prints the alphabet in lowercase without q & e
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
			putchar(c);
	}

	putchar('\n');
	return (0);
}
