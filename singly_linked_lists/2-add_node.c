#include "lists.h"
/**
 * add_node - function that add a new node
 * @str: string duplicated
 * @head: beginning of a single linked list
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t j = 0;
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	while (str[j])
	{
		j++;
	}
	node->len = j;
	node->next = *head;
	*head = node;
	return (*head);
}

