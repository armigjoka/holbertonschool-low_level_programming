#include "main.h"
/**
 * _islower - Entry point
 * @c: The character to print
 *
 * Return: On uppercase 1.
 * On lowercase, 0 is returned.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
