#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>


/**
 * key_index - function that gives the index of the key
 * @key: key of the function
 * @size: size of the array of hash table
 * Return: index at which the key/value pair should be stored in array
 * of the has table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
	{
		return (0);
	}
	return (hash_djb2(key) % size);
}

