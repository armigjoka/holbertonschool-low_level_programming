#include "main.h"

/**
 * _print_rev_recursion - entry
 * @s: string
 * Return void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_puts_recursion(s);
	}
	_putchar(*s);
	return;
}
