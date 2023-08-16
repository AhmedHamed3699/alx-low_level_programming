#include "function_pointers.h"

/**
 * int_index - searches an array for an integer
 * @array: the array
 * @size: the size of the array
 * @cmp: the compare function
 *
 * Return: 1 if found
 * otherwise -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
