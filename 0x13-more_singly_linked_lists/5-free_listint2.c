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
	listint_t *ptr = *head, *cur = *head;

	*head = NULL;
	while (ptr)
	{
		ptr = ptr->next;
		free(cur);
		cur = ptr;
	}
}
