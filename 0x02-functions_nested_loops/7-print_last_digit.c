#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: The int to get its last digit
 *
 * Return: int - last digit of n
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
		last *= -1;
	_putchar(last + '0');
	return (last);
}
