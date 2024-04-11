#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to head pointer
 *
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;
	int n;

	if (!ptr)
		return (0);

	*head = ptr->next;
	n = ptr->n;
	free(ptr);
	return (n);
}
