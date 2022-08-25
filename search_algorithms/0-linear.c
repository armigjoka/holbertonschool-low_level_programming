#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - function that search for value in an array of integers
 * @array: pointer to the first element of array
 * @size: number of elements of array
 * @value: value to search 
 * Return: first index  where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return(i);
	}
	return(-1);
}
