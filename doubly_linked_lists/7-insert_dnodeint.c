#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts
 * a new node at a given position
 * @h: head node
 * @idx: unsigned int
 * @n: int
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp = *h;

	if (h == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = tmp;
		tmp->prev = new;
		*h = new;
		return (*h);
	}
	while (idx != 1 && tmp->next != NULL)
	{
		tmp = tmp->next;
		idx--;
	}
	while (idx == 1 && tmp->next != NULL)
	{
		tmp = tmp->next;
		idx--;
	}
	if (tmp->next->next != NULL)
	{
		new->next = tmp->next;
	}
	else
	{
		new->next = NULL;
	}
	tmp->next = new;
	return (new);
}
