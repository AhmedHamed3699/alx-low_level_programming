#include "search_algos.h"
#include <math.h>

/**
 * interpolation_search - searches for a value in an sorted array of integers
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located, -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1, pos;

	if (!array || array[low] > value)
		return (-1);

	pos = (double)(high - low) / (array[high] - array[low]);
	pos *= value - array[low];
	pos += low;

	return (-1);
}
