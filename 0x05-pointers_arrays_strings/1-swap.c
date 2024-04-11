#include "main.h"

/**
 * swap_int - swaps to variables
 * @a: pointer to first variable
 * @b: pointer to second variable
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
