#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - compute number of elements in a linked list
 * @h: head pointer
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	int n = 0;

	while (ptr)
	{
		ptr = ptr->next;
		n++;
	}
	return (n);
}
