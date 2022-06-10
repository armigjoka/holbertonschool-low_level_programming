#include "main.h"

/**
 * print_times_table -- entry point
 * @n: to be checked
 * Return: 0
 */
void print_times_table(int n)
{
	int v1, v2, p;

	if (n >= 0 && n <= 15)
	{
		for (v1 = 0; v1 <= n; v1++)
		{
			for (v2 = 0; v2 <= n; v2++)
			{

				p = (v1 * v2);
				if (v2 == 0)
					_putchar(p + '0');
			else
			{
				_putchar(',');
				_putchar(' ');
				if (p <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(p + '0');
				}
				else if (p > 9 && p < 100)
				{
					_putchar(' ');
					_putchar((p / 10) + '0');
					_putchar((p % 10) + '0');
				}
				else if (p >= 100)
				{
					_putchar((p / 100) + '0');
					_putchar(((p / 10) % 10) + '0');
					_putchar((p % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}
}
