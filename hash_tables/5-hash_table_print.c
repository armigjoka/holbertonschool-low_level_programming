#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>


/**
 * hash_table_print - function that print a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int j = 0;
	hash_node_t *current;
	short flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	while (j < ht->size)
	{
		if (ht->array[j] != NULL)
		{
			if (flag == 1)
				printf(", ");
			current = ht->array[j];

			while (current != NULL)
			{
				printf("'%s':'%s'", current->key, current->value);
				current = current->next;
				if (current != NULL)
					printf(", ");
			}
			flag = 1;
		}
		j++;
	}
	printf("}\n");
}

