#include <stdio.h>

/**
 * main - Entry point
 * program that prints the alphabet
 * in reverse in lowercase
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);

	putchar("\n");
	return (0);
}
