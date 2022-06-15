#include "main.h"
/**
 * swap_int - Entry
 * @a: value of integer
 * @b: value of integer
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}

