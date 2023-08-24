#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to head pointer
 * @str: data to be in new node
 *
 * Return: the address of the new element
 * or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newPtr = malloc(sizeof(*newPtr));

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
	newPtr->next = *head;
	*head = newPtr;
	return (newPtr);
}
