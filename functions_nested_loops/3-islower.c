#include "main.h"
/**
 * _islower - Entry point
 * @c: The character to print
 *
 * Return: On uppercase 1.
 * On lowercase, 0 is returned.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
