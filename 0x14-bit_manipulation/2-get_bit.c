#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number
 * @index: the index
 *
 * Return: void
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}
