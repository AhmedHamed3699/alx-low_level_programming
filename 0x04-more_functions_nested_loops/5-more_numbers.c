#include "main.h"

/**
 * more_numbers - prints 10 times
 * the numbers, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, c;

	i = 0;
	while (i < 10)
	{
		c = 0;
		while (c <= 14)
		{
			if (c > 9)
				_putchar(c / 10 + '0');
			_putchar(c % 10 + '0');
			c++;
		}
		_putchar('\n');
		i++;
	}
}
