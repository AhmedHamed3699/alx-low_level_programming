#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: pointer to head pointer
 * @n: data to be in new node
 *
 * Return: the address of the new element
 * or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newPtr = malloc(sizeof(*newPtr));

	if (!newPtr)
		return (NULL);

	newPtr->n = n;
	newPtr->next = *head;
	*head = newPtr;
	return (newPtr);
}
