#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to the string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, n;

	i = 0;
	while (str[i] != '\0')
		i++;
	n = i/2;
	while (n < i)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
