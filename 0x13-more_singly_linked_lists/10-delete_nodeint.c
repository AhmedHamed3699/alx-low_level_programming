#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given position
 * @head: pointer to head pointer
 * @index: index to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *prv;
	unsigned int i = 0;

	if (!head)
		return (-1);
	ptr = *head;
	prv = NULL;
	while (ptr)
	{
		if (i == index)
		{
			if (!prv)
				*head = ptr->next;
			else
				prv->next = ptr->next;
			free(ptr);
			return (1);
		}
		prv = ptr;
		ptr = ptr->next;
		i++;
	}
	return (-1);
}
