#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - function that returns the sum
 * @n: value
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
