#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint -  adds a new node at the beginning of a dlistint_t list
 * @head: pointer to head node
 * @n: value of the new node
 * Return: added node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newPtr;

	if (!head)
		return (NULL);
	newPtr = malloc(sizeof(*newPtr));
	if (!newPtr)
		return (NULL);
	newPtr->n = n, newPtr->prev = NULL;
	newPtr->next = *head;
	if (*head)
		(*head)->prev = newPtr;
	*head = newPtr;
	return (newPtr);
}
