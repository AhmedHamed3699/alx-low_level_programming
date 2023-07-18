#include "main.h"

/**
 * convert_to_string - prints number using _putchar
 * @n: the number to be printed
 *
 * Return: void
 */
void convert_to_string(int n)
{
	if (!n)
		return;

	convert_to_string(n / 10);
	_putchar((n % 10) + '0');
}

/**
 * print_to_98 - prints all natural numbers from n to 98
 * followed by a new line.
 * @n: the starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n == 0)
			_putchar('0');
		else if (n < 0)
		{
			_putchar('-');
			convert_to_string(-1 * n);
		}
		else
			convert_to_string(n);
		_putchar(',');
		_putchar(' ');
		if (n > 98)
			n--;
		else
			n++;
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
