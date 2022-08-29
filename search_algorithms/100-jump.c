#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function that searches for a value in a sorted array
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search
 * Return: the first index where the value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, step;
	size_t start = 0;
	size_t end = 0;

	if (array == NULL || size == 0)
		return (-1);
	step = sqrt(size);
	while (array[end] < value && end < size)
	{
		printf("Value checked array[%ld] = [%d]\n", end, array[end]);
		start = end;
		end += step;

		if (start > size)
			return (-1);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);

	end = MIN(end, size - 1);
	for (i = start; i <= end; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
		return (-1);
}
