#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - entry
 * @a: pointer
 * @size: size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum = 0;
	int sum1;
	int i, k;

	i = 0;
	while (i < size)
	{
		sum = sum + a[i * (size + 1)];
		i++;
	}
	k = size - 1;
	sum1 = 0;
	while (k < size * size - 1)
	{
		if (k == size * size)
			sum1 = sum1 + a[k - 1];
		else
			sum1 = sum1 + a[k];
		k = k + size - 1;
	}
	printf("%d, %d\n", sum, sum1);
}


