#include "main.h"
/**
 * print_sign  - Entry point
 * @n: The character to print
 *
 * Return: If larger than 0, return 1..
 * For equal zero, 0 is returned.
 * Otherwhise, return -1..
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
