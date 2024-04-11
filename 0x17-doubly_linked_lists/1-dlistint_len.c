#include "lists.h"

/**
 * dlistint_len - get number of elements in a linked dlistint_t list
 * @h: pointer to head node
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	int n = 0;

	while (ptr)
	{
		n++;
		ptr = ptr->next;
	}
	return (n);
}
