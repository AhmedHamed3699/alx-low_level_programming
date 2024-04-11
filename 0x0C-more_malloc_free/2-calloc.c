#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of array elements
 * @size: size of bytes for each element
 *
 * Return: pointer to the allocated array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (!nmemb || !size)
		return (NULL);

	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);

	memset(array, 0, (nmemb * size));
	return (array);
}
