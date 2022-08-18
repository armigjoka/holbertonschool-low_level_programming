#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *hash_table_get - function that retrieves a value associated a key
 * @ht: hash table
 * @key: key of hash table
 * Return: the value or NULL if key couldn't found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ind;
	hash_node_t *current;

	if (ht == NULL || key == NULL)
		return (0);
	ind = key_index((const unsigned char *)key, ht->size);
	current = ht->array[ind];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		current = current->next;
		}
	}
	return (NULL);
}
