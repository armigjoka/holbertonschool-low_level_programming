#include "lists.h"
/**
 * delete_dnodeint_at_index - structure to print
 * @head: pointer of the list
 * @index: index to insert new node
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int j = 0;
	dlistint_t *tmp1 = *head, *tmp;

	if (tmp1 == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp1);
		return (1);
	}
	while (j < (index - 1))
	{
		if (tmp1->next == NULL)
			return (-1);
		tmp1 = tmp1->next;
		j++;
	}
	tmp = tmp1->next;
	tmp1->next = tmp->next;
	free(tmp);
	return (1);
}
