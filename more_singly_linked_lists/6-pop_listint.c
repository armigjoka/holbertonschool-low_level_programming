#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a  list
 * @head: head of the  list
 * Return: the head node's data (n)
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (*head == NULL)
	{
		return (0);
	}
	data = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (data);
}
