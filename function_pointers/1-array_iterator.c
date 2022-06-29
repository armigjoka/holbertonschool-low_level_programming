#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - the iterator
 * @array: it is the array
 * @size: size of array
 * @action: pointer to function to use
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
		for (i = 0; i < size; i++)
			(*action)(array[i]);
}
