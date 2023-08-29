#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_rec - reverses linked list recursion
 * @head: pointer to head pointer
 * @node: current node
 *
 * Return: a node
 */
listint_t *reverse_rec(listint_t **head, listint_t *node)
{
	listint_t *TNode = NULL;

	if (!node)
		return (NULL);
	if (!node->next)
	{
		*head = node;
		return (node);
	}
	TNode = reverse_rec(head, node->next);
	TNode->next = node;
	node->next = NULL;
	return (node);
}

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to head pointer
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	if (!head)
		return (NULL);
	reverse_rec(head, *head);
	return (*head);
}
