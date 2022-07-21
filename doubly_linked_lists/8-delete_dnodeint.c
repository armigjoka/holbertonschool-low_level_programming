#include "lists.h"
/**
 * delete_dnodeint_at_index - structure to print
 * @head: pointer of the list
 * @index: index to insert new node
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head, *tmp1;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		if (tmp->next != NULL)
		{
			tmp = tmp->next;
			tmp->prev = NULL;
		}
		free(*head);
		*head = tmp;
		return (1);
	}
	while (index != 0 && tmp->next != NULL)
	{
		tmp = tmp->next;
		index--;
	}
	tmp1 = tmp->prev;
	if (tmp->next == NULL)
	{
		tmp1->next = NULL;
		tmp->prev = NULL;
		free(tmp);
	}
	else
	{
		tmp1->next = tmp->next;
		tmp1 = tmp1->next;
		tmp1->prev = tmp->prev;
		free(tmp);
	}
	return (1);
}
