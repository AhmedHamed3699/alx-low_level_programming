#include "search_algos.h"

/**
 * binary_search_recursive - helper binary search function
 *
 * @array: pointer to the first element of the array to search in
 * @left: left index
 * @right: right index
 * @value: value to search for
 *
 * Return: first index where value is located, -1 if not found
 */
int binary_search_recursive(int *array, int left, int right, int value)
{
	int i, mid;

	if (left > right)
		return (-1);
	if (left == right && array[left] == value)
		return (left);

	printf("Searching in array: %i", array[left]);
	for (i = left + 1; i <= right; i++)
		printf(", %i", array[i]);
	putchar('\n');

	mid = (left + right) / 2;
	if (array[mid] < value)
		return (binary_search_recursive(array, mid + 1, right, value));
	else if (array[mid] > value)
		return (binary_search_recursive(array, left, mid - 1, value));
	else
		return (binary_search_recursive(array, left, mid, value));
}

/**
 * advanced_binary - searches for a value in an sorted array of integers
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located, -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (binary_search_recursive(array, 0, size - 1, value));
}
