#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint_end -  adds a new node at the end of a dlistint_t list
 * @head: pointer to head node
 * @n: value of the new node
 * Return: number of nodes
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *newPtr;

	if (!head)
		return (NULL);
	ptr = *head;
	newPtr = malloc(sizeof(*newPtr));
	if (!newPtr)
		return (NULL);
	newPtr->n = n, newPtr->next = NULL;
	if (!ptr)
	{
		*head = newPtr;
		newPtr->prev = NULL;
		return (newPtr);
	}
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = newPtr;
	newPtr->prev = ptr;
	return (newPtr);
}
