#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int tmp = 0x0123abcd;
	int *ptr = &tmp;
	short int first = *((short int *)ptr);

	if (first == 0x0123)
		return (0);
	else
		return (1);
}
