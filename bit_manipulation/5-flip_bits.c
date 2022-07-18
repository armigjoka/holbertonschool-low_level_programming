#include <stdio.h>
#include "main.h"

/**
 * flip_bits - function that returns the number of bits to be flipped
 * to get from  one number to another
 * @n: number to be flipped
 * @m: number to flip n to m
 * Return: return the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int f = (n ^ m), max = 0;

	while (f != 0)
	{
		max += f & 1;
		f = f >> 1;
	}
	return (max);
}
