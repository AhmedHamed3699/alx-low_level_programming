#include "search_algos.h"

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

	while (low <= high)
	{
		if (array[high] == array[low])
			pos = low;
		else
			pos = (((double)(high - low) / (array[high] - array[low])) *
						 (value - array[low])) +
						low;

		if (pos > high)
		{
			printf("Value checked array[%i] is out of range\n", pos);
			return (-1);
		}
		else
			printf("Value checked array[%i] = [%i]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (-1);
}
