#include "lists.h"
#include <stdio.h>

/**
 * get_dnodeint_at_index - get the nth node of a dlistint_t linked list
 * @head: pointer to head node
 * @index: the index of the node, starting from 0
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int n = 0;

	while (ptr)
	{
		if (n == index)
			return (ptr);
		ptr = ptr->next;
		n++;
	}
	return (NULL);
}
