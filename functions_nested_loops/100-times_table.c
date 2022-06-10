#include "main.h"

/**
 * print_times_table -- entry point
 * @n: to be checked
 * Return: 0
 */
void print_times_table(int n)
{
	int c, i, mul;

	if (n > 0; && n =< 15)

	for (c = 0; c < 10; c++)
	{
		for (i = n; i < 10; i++)
		{
			if (n == 0)
			{
				_putchar(mul + '0');
			}
			else if (mul < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(mul + '0');
			}
			else if ((mul >= 10 && mul < 100))
			{
				_putchar(',');
				_putchar(' ');
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
