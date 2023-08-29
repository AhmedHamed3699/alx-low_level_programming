#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head pointer
 *
 * Return: address of the node where the loop starts
 * Or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr = head, *ptr_f = head;

	while (ptr)
	{
		ptr = ptr->next;
		if (ptr_f && ptr_f->next)
		{
			ptr_f = ptr_f->next->next;
			if (ptr == ptr_f)
			{
				ptr = head;
				while (ptr != ptr_f)
					ptr = ptr->next, ptr_f = ptr_f->next;
				return (ptr);
			}
		}
	}
	return (NULL);
}
