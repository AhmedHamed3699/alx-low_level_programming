#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to head pointer
 * @str: data to be in new node
 *
 * Return: the address of the new element
 * or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newPtr = malloc(sizeof(*newPtr));
	list_t *ptr = *head;

	if (!newPtr)
		return (NULL);
	if (!str)
	{
		newPtr->str = NULL;
		newPtr->len = 0;
	}
	else
	{
		newPtr->str = strdup(str);
		if (newPtr->str == NULL)
			return (NULL);
		newPtr->len = strlen(str);
	}
	newPtr->next = NULL;
	if (!ptr)
		*head = newPtr;
	else
	{
		while (ptr && ptr->next)
			ptr = ptr->next;
		ptr->next = newPtr;
	}
	return (newPtr);
}
