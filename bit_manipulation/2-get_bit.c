#include <stdio.h>
#include "main.h"

/**
 * get_bit - function tha returns the value of a bit
 * @n: unsigned int
 * @index: unsigned long int
 * Return: the value of a bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	
	if (n >> index & 1)
		return (1);
	else
		return (0);
	return (1);
}
