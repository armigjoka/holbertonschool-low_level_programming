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
	unsigned int i = 0;

	if (n == 0 && index < 64)
		return (0);
	i = 0;
	while (i <= 63)
	{
		if (index == i)
		{
			return (n & 1);
		}
		n >>= 1;
		i++;
	}
	return (-1);
}
