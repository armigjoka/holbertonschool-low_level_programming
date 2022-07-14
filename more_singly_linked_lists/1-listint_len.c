#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function that returns the number of elements in linked list
 * @h: pointer to list
 * Return: the number of elements in list.
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
