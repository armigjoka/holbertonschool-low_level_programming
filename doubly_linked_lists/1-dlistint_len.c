#include "lists.h"
/**
 * dlistint_len - the function that return the number of elemtents in linked list
 * @h: pointer to list
 * Return: the number of elemtents in linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t j = 0;

	while (h)
	{
		h = h->next;
		j++;
	}
	return (j);
}
