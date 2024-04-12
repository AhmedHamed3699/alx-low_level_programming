#include "search_algos.h"

/**
 * exponential_search - searches for a value in an sorted array of integers
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located, -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	int left, right, i, pos = 1;

	if (!array || array[0] > value)
		return (-1);
	if (array[0] == value)
		return (0);

	while (pos < (int)size && array[pos] <= value)
	{
		printf("Value checked array[%i] = [%i]\n", pos, array[pos]);
		pos *= 2;
	}

	left = pos / 2;
	if (pos < (int)size)
		right = pos;
	else
		right = size - 1;

	printf("Value found between indexes [%i] and [%i]\n", left, right);
	while (left <= right)
	{
		printf("Searching in array: %i", array[left]);
		for (i = left + 1; i <= right; i++)
			printf(", %i", array[i]);
		putchar('\n');

		pos = (left + right) / 2;
		if (array[pos] < value)
			left = pos + 1;
		else if (array[pos] > value)
			right = pos - 1;
		else
			return (pos);
	}
	return (-1);
}
