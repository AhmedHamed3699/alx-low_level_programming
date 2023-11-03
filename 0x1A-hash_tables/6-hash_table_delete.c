#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr, *tmp;
	unsigned long int i = 0;

	if (!ht)
		return;
	for (; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ptr)
		{
			free(ptr->key);
			free(ptr->value);
			tmp = ptr->next;
			free(ptr);
			ptr = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
