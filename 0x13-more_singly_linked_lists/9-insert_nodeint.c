#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to head pointer
 * @idx: index to be inserted at
 * @n: data of the new node
 *
 * Return: pointet to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *prv, *newNode;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	ptr = *head;
	prv = NULL;
	newNode = malloc(sizeof(*newNode));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (!ptr && idx == 0)
	{
		*head = newNode;
		return (newNode);
	}
	while (ptr)
	{
		if (i == idx)
		{
			if (!prv)
				*head = newNode;
			else
				prv->next = newNode;
			newNode->next = ptr;
			return (newNode);
		}
		prv = ptr;
		ptr = ptr->next;
		i++;
	}
	free(newNode);
	return (NULL);
}
