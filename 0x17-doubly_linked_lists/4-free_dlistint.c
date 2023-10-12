#include "lists.h"
#include <stdio.h>

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head, *prv = head;

	while (ptr)
	{
		ptr = ptr->next;
		free(prv);
		prv = ptr;
	}
}
