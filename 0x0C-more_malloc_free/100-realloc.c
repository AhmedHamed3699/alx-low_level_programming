#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocate a memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: pointer to the new allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newPtr;
	unsigned int min;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	newPtr = malloc(new_size);
	if (newPtr == NULL)
		return (NULL);
	if (ptr == NULL)
		return (newPtr);

	min = (new_size < old_size) ? new_size : old_size;
	while (min--)
		((char *)newPtr)[min] = ((char *)ptr)[min];

	free(ptr);
	return (newPtr);
}
