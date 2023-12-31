#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointet to number
 * @index: the index
 *
 * Return: void
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 32)
		return (-1);
	*n |= (1 << index);
	return (1);
}
