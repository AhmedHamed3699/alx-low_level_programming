#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an sorted array of integers
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located, -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	int jump = sqrt(size), low = 0, high = jump;
	int i;

	if (!array || array[low] > value)
		return (-1);

	while (low < (int)size)
	{
		printf("Value checked array[%i] = [%i]\n", low, array[low]);
		if (array[low] == value)
			return (low);
		if (high < (int)size && array[high] < value)
			low = high, high += jump;
		else
		{
			printf("Value found between indexes [%i] and [%i]\n", low, high);
			if (high >= (int)size)
				high = size - 1;
			for (i = low; i <= high; i++)
			{
				printf("Value checked array[%i] = [%i]\n", i, array[i]);
				if (array[i] == value)
				{
					return (i);
				}
			}
			return (-1);
		}
	}
	return (-1);
}
