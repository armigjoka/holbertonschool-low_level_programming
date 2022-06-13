#include "main.h"

/**
 * print_numbers - Entry
 * Return: (0)
 *
 */
void print_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
			_putchar(j + '0');
		_putchar('\n');
	}
}
