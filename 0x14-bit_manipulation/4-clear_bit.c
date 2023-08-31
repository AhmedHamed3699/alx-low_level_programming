#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointet to number
 * @index: the index
 *
 * Return: void
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 32)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
