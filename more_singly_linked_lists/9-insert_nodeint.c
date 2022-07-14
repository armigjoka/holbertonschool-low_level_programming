#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts
 * a new node at a given position
 * @head: head node
 * @idx: unsigned int
 * @n: int
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new, *tmp = *head;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = tmp;
		*head = new;
		return (new);
	}
	while (i < (idx - 1))
	{
		tmp = tmp->next;
		if (tmp == NULL)
		{
			return (NULL);
		}
		i++;
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}


