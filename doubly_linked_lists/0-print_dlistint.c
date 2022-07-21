#include "lists.h"
/**
 * print_dlistint - the function thats prints all the elemtens of a list
 * @h: pointer to a list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", (*h).n);
		h = h->next;
		i++;
	}
	return (i);
}

