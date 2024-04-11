#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - compute number of elements in a linked list
 * @h: head pointer
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr = h;
	int n = 0;

	while (ptr)
	{
		ptr = ptr->next;
		n++;
	}
	return (n);
}
