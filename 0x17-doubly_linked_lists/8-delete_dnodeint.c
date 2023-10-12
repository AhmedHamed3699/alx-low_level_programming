#include "lists.h"
#include <stdio.h>

/**
 * delete_dnodeint_at_index - deletes the node at index
 * index of a dlistint_t linked list
 * @head: pointer to head node
 * @index: the index of the list where the node should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i = 0;

	if (!head)
		return (-1);
	ptr = *head;
	while (ptr)
	{
		if (i == index)
		{
			if (!ptr->prev)
			{
				*head = ptr->next;
				free(ptr);
				if (*head)
					(*head)->prev = NULL;
				return (1);
			}
			ptr->prev->next = ptr->next;
			if (ptr->next)
				ptr->next->prev = ptr->prev;
			return (free(ptr), 1);
		}
		ptr = ptr->next, i++;
	}
	return (-1);
}
