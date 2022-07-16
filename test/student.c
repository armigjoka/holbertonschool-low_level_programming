#include "student.h"
/**
 * print_list - function that prints the elementes of the list.
 * @head: pointer to list
 * Return: the number of the elements of list
 */
int print_list(const student *head)
{
	int i = 0;

	if (head == NULL)
	{
		printf("nil");
	}
	while (head != NULL)
		if (head->name == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("%s - [%d]\n", head->name, head->grade);
		}
	head = head->next;
	return (i);
}

/**
 * avg - structure to print
 * @head: pointer of the linked list
 * Return: average
 */
int sum (const student *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = head->grade;
		head = head->next;
	}
	return (sum);
}

/**
 * avg - structure to print
 * @head: pointer of the linked list
 * Return: average
 */
float avg (const student *head)
{
	int c;
	int st;
	float avg;

	while (head != NULL)
	{
		st = head->grade;
		head = head->next;
		c++;
	}
	avg = st / c;
	head = head->next;
	return (avg);
}

/**
 * max_grade - the structure to print
 * @head: pointer to linked list
 * Return: max grade
 */
int max_grade(const student *head)
{
	int max = 1;

	while (head != NULL)
	{
		if (max < head->grade)
			max = head->grade;
		head = head->next;
	}
	return (max);
}
