#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 10;
	while (i--)
	{
		for (c = 'a'; c < 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
