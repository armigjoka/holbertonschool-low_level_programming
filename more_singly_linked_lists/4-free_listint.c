#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - function that frees a list
 * @head: the beginning of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *f;

	while ((f = head))
	{
		head = head->next;
		free(f->next);
		free(f);
	}
}
