#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>


/**
 * *hash_djb2 - function that implemanting the djb2 algorithm
 * @str: string used to generate the value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
