#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to head pointer
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr, *cur;

	if (!head)
		return;

	ptr = *head;
	cur = *head;
	while (ptr)
	{
		ptr = ptr->next;
		free(cur);
		cur = ptr;
	}
	*head = NULL;
}
