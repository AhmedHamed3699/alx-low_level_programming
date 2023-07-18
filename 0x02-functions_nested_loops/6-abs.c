#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: The int to get itst value
 *
 * Return: int - the absolute of n
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	return (-1 * n);
}
