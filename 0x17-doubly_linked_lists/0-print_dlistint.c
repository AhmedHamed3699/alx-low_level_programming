#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to head node
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	int n = 0;

	while (ptr)
	{
		n++;
		printf("%i\n", ptr->n);
		ptr = ptr->next;
	}
	return (n);
}
