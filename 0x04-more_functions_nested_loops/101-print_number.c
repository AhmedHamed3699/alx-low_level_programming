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
 * print_number - prints a number
 * @n: the number to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	if (n == 0)
		_putchar('0');
	else if (n > 0)
		convert_to_string(n);
	else
	{
		_putchar('-');
		convert_to_string(-1 * n);
	}
}
