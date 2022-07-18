#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - function that convert a binary number to an unsigned int.
 * @b: pointer to a string
 * Return: e converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int j = 0, val = 1;
	int i;

	if (b == NULL)
	{
		return (0);
	}
	i = 0;
	while (b[i])
	{
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		j = j + (b[i] - '0') * val;
		val = val * 2;
		i--;
	}
	return (j);
}

