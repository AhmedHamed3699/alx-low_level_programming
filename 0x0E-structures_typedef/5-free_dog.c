#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs (deallocation)
 * @d: pointer to dog needed to be deleted
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
