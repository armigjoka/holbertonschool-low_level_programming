#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - function that add a new node at the end of list
 * @head: the beginning of a single linked list
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp = *head, *new;

       new = malloc(sizeof(listint_t));
       if (new == NULL)
	       return (NULL);
       new->n = n;
       new->next = NULL;
       if (*head == NULL)
       {
	       *head = new;
       }
       else
       {
	       while (tmp->next != NULL)
	       {
		       tmp = tmp->next;
	       }
	       tmp->next = new;
       }
       return (*head);
}
