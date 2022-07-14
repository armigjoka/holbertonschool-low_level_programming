#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of list
 * @index: index of the node
 * @head: head of th list
 * Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while ((j < index) && head != NULL)
	{
		head = head->next;
		j++;
	}
	if (j == index)
	{
		return (head);
	}
	return (NULL);
}
