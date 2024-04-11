#include <stdio.h>
#include "main.h"

/**
 * print_binary_rec - utility recursive function
 * @n: the number
 *
 * Return: void
 */
void print_binary_rec(unsigned long int n)
{
	if (!n)
		return;
	print_binary_rec(n >> 1);
	_putchar((n & 1) + '0');
}

/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (!n)
		_putchar('0');
	else
		print_binary_rec(n);
}
