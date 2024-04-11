#include "main.h"

/**
 * print_sign - checks for sign of the number
 * @n: The int to check
 *
 * Return: 1 if n is positive
 * 0 if n is zero
 * -1 if n is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
