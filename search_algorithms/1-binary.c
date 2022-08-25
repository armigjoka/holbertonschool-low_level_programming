#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search
 * Return: the index where the value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0, mid, i;
	int high = size - 1;

	if (array == NULL)
		return (-1);
	printf("Searching in array: ");
	while (low <= high)
	{
		mid = (low + high) / 2;
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
