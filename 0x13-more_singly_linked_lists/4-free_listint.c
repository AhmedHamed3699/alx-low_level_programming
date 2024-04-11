#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head pointer
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *ptr = head, *cur = head;

	while (ptr)
	{
		ptr = ptr->next;
		free(cur);
		cur = ptr;
	}
}
