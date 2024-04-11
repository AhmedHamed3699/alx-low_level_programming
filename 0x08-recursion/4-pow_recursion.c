#include "main.h"

/**
 * _pow_recursion - computes x raised to the power y
 * @x: the base
 * @y: the power
 *
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	int p;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y % 2)
		return (x * _pow_recursion(x, y - 1));

	p = _pow_recursion(x, y / 2);
	return (p * p);
}
