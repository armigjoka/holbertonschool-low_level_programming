#include <stdio.h>
#include "main.h"

/**
 * set_bit - function that sets the value of a bit
 * @n: pointer
 * @index: unsigned long int
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 0;

	if (n != 0 && index > 63)
	{
		return (-1);
	}
	i = 1 << index;
	*n = (*n | i);
	return (1);
}
