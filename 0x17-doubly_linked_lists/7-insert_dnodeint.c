#include "lists.h"
#include <stdio.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to head node
 * @idx: the index of the list where the new node should be added
 * @n: value in the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *newPtr, *prev;
	unsigned int i = 0;

	if (!h)
		return (NULL);
	ptr = *h, newPtr = malloc(sizeof(*newPtr));
	if (!newPtr)
		return (NULL);
	newPtr->n = n;
	while (ptr)
	{
		if (i == idx)
		{
			if (!ptr->prev)
			{
				newPtr->prev = NULL, newPtr->next = *h;
				(*h)->prev = newPtr;
				*h = newPtr;
				return (newPtr);
			}
			newPtr->prev = ptr->prev, newPtr->next = ptr;
			(ptr->prev)->next = newPtr, ptr->prev = newPtr;
			return (newPtr);
		}
		prev = ptr;
		ptr = ptr->next, i++;
	}
	if (idx == 0)
	{
		newPtr->next = NULL, newPtr->prev = NULL;
		*h = newPtr;
	}
	else if (idx == i)
		newPtr->next = NULL, newPtr->prev = prev, prev->next = newPtr;
	else
		return (free(newPtr), NULL);
	return (newPtr);
}
