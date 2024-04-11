#include "search_algos.h"

/**
 * binary_search - searches for a value in an sorted array of integers
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located, -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, mid;
	int i;

	if (!array)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: %i", array[left]);
		for (i = left + 1; i <= right; i++)
			printf(", %i", array[i]);
		putchar('\n');

		mid = (left + right) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
