#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangel
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			_putchar(' ');
			j++;
		}
		k = 0;
		while (k <= i)
		{
			_putchar('#');
			k++;
		}
		_putchar('\n');
		i++;
	}
}
