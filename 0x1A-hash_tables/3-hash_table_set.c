#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table
 * @key: the key
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;
	char *new_value = NULL, *new_key = NULL;

	if (!ht || !key)
		return (0);

	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		return (0);
	new_key = strdup(key);
	if (!new_key)
		return (free(new_node), 0);
	new_value = strdup(value);
	if (new_value == NULL)
		return (free(new_node), free(new_key), 0);

	new_node->key = new_key, new_node->value = new_value;
	index = key_index((const unsigned char *)key, ht->size);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
