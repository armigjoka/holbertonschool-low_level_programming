#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - the index of the first element
 * @size: the number of the elemnets of array
 * @array: array of the function
 * @cmp: pointer to the function
 * Return: -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i <= size; i++)
		if (cmp(array[i]))
			return (i);
	if (i == size)
		return (-1);
	return (-1);
}
