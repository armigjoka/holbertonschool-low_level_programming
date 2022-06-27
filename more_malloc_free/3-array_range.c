
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - entry point
 * @min: minimum number
 * @max: maximum number
 * Return: p
 */
int *array_range(int min, int max)
{
	int i;
	int *a;
	int len;

	len = (max - min) + 1;
	if (min > max)
	{
		return (NULL);
	}
	a = malloc(sizeof(*a) * len);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		a[i] = min++;
	}
	return (a);
}
