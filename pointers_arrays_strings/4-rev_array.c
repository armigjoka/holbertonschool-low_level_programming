#include "main.h"
/**
 * reverse_array - entry
 * @a: function that reverses the content of an array of integers
 * @n: number of elements of the array
 * Return: reverse an array
 */
void reverse_array(int *a, int n)
{
	int j, tmp;

	for (j = n - 1; j >= n / 2; j--)
	{
		tmp = a[j];
		a[j] = a[n - j - 1];
		a[n - j - 1] = tmp;
	}
}
