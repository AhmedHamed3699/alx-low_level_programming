#include "lists.h"
#include <stdio.h>

/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list
 * @head: pointer to head node
 * Return: sum of all the data (n)
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
