#include "lists.h"
/**
 * list_len - the function that return the elemtents in linked list
 * @len: list length
 * Return: the number of elements in linked list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != 0)
	{
		h = h->next;
		i++;
	}
	return (i);
}
