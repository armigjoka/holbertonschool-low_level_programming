#include "lists.h"
/**
 * add_node_end - function that add a new node at the end of list
 * @str: string duplicated
 * @head: the beginning of a single linked list
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t i = 0;
	list_t *node, *temp;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	while (str[i])
	{
		i++;
	}
	node->len = i;
	node->next = NULL;
	temp = *head;
	if (temp == NULL)
	{
		*head = node;
	}
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = node;
	}
	return (*head);
}

