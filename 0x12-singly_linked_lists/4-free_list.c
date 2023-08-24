#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head pointer
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *ptr = head, *cur = head;

	while (ptr)
	{
		if (ptr->str != NULL)
			free(ptr->str);
		ptr = ptr->next;
		free(cur);
		cur = ptr;
	}
}
