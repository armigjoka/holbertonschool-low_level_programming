#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - function that delete the hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long j = 0;
	hash_node_t *current, *next;

	while (j < ht->size)
	{
		if (ht->array[j] != NULL)
		{
			current = ht->array[j];
			while (current != NULL)
			{
				next = current->next;
				free(current->key);
				free(current->value);
				free(current);
				current = next;
			}
		}
		j++;
	}
	free(ht->array);
	free(ht);
}
