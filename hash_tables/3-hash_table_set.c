#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table
 * @key: key of hash table
 * @value: value associated whith the key. Value must be dublicated
 * Return: 1 if it is succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ind;
	hash_node_t *n, *current;

	if (ht == NULL || key == NULL)
		return (0);
	ind = key_index((const unsigned char *)key, ht->size);
	current = ht->array[ind];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}
	n = malloc(sizeof(hash_node_t));
	n->key = strdup(key);
	n->value = strdup(value);
	if (n->value == NULL)
		return (0);
	n->next = ht->array[ind];
	ht->array[ind] = n;

	return (1);
}
