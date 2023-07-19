#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the number
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, tmp;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			tmp = i * j;
			if (tmp <= 9 && j != 0)
				_putchar(' ');
			if (tmp <= 99 && j != 0)
				_putchar(' ');
			if (tmp > 99)
				_putchar(tmp / 100 + '0');
			if (tmp > 9)
				_putchar(((tmp / 10) % 10) + '0');
			_putchar(tmp % 10 + '0');
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
