#include "main.h"

/**
 * print_diagonal - Entry
 * @n : number of lines
 * Return: 0
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	if (n < 1)
		_putchar('\n');
}
