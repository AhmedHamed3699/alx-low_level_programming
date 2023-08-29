#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a linked list (safe version)
 * @head: head pointer
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *ptr = head, *ptr_f = head;
	int b = 0;

	while (ptr)
	{
		if (ptr_f && ptr_f->next)
		{
			ptr_f = ptr_f->next->next;
			b = 1;
		}
		printf("[%p] %i\n", (void *)ptr, ptr->n);
		ptr = ptr->next;
		if (b && ptr == ptr_f)
		{
			ptr = head;
			while (ptr != ptr_f)
			{
				printf("[%p] %i\n", (void *)ptr_f, ptr_f->n);
				ptr = ptr->next, ptr_f = ptr_f->next, i++;
			}
			printf("-> [%p] %i\n", (void *)ptr, ptr->n);
			return (i);
		}
		b = 0;
		i++;
	}
	return (i);
}
