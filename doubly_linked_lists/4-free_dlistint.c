#include "lists.h"

/**
 * free_dlistint - function that frees a list
 * @head: the beginning of the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *fr;

	while (head)
	{
		fr = head->next;
		free(head);
		head = fr;
	}
}
