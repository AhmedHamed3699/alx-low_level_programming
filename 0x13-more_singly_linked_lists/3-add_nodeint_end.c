#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: pointer to head pointer
 * @n: data to be in new node
 *
 * Return: the address of the new element
 * or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newPtr = malloc(sizeof(*newPtr));
	listint_t *ptr = *head;

	if (!newPtr)
		return (NULL);

	newPtr->n = n;
	newPtr->next = NULL;
	if (!ptr)
		*head = newPtr;
	else
	{
		while (ptr && ptr->next)
			ptr = ptr->next;
		ptr->next = newPtr;
	}
	return (newPtr);
}
