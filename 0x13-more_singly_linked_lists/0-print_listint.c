#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head pointer
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	int n = 0;

	while (ptr)
	{
		printf("%i\n", ptr->n);
		ptr = ptr->next;
		n++;
	}
	return (n);
}
