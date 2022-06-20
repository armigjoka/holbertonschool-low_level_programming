#include "main.h"

/**
 * _puts_recursion - entry
 * @s: pointer
 * Return void
 */
void _puts_recursion(char *s)
{
	if (*s == '\n')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
