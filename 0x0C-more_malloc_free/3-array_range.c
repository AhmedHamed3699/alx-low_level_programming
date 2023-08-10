#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - create an array of integers
 * @min: start value
 * @max: end value
 *
 * Return: pointer to the allocated array
 */
int *array_range(int min, int max)
{
	int *array;
	int i, val;

	if (min > max)
		return (NULL);

	array = malloc((max - min + 1) * sizeof(*array));
	if (array == NULL)
		return (NULL);

	i = 0;
	for (val = min; val <= max; val++)
	{
		array[i] = val;
		i++;
	}
	return (array);
}
