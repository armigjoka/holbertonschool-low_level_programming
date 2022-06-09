#include "main.h"
/**
 * print_last_digit -- entry point
 * @n: character that the code will check.
 * Return: 0 or != 0
 */
int print_last_digit(int n)
{
	int neg;

	neg = (n % 10);
	if (neg < 0)
		neg *= -1;
	_putchar(neg + '0');
	return (neg);
}

