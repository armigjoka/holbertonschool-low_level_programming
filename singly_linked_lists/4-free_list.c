#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: the beginning of the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *fn;

	while ((fn = head))
	{
		head = head->next;
		free(fn->str);
		free(fn);
	}
}
