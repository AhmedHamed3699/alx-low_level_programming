#include "main.h"
#define uli unsigned long int

/**
 * binary_search - fast search function
 * @l: left range
 * @r: right range
 * @x: the number to search for
 *
 * Return: root of numbet if exists
 * -1 otherwise
 */
int binary_search(uli l, uli r, uli x)
{
	uli  mid;

	if (l > r)
		return (-1);
	mid = l + (r - l) / 2;

	if ((mid * mid) == x)
		return (mid);
	if (mid * mid < x)
		return (binary_search(mid + 1, r, x));
	return (binary_search(l, mid - 1, x));
}

/**
 * _sqrt_recursion - computes the natural square root of a number
 * @n: the number
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (binary_search(0, n, n));
}
