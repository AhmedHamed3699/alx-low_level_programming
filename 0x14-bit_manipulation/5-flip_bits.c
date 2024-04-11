#include <stdio.h>
#include "main.h"

/**
 * flip_bits - gets bits you would need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to filp
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;

	while (n || m)
	{
		if ((n & 1) != (m & 1))
			i++;
		n >>= 1;
		m >>= 1;
	}
	return (i);
}
