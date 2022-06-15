#include "main.h"

/**
 * _puts - prints a string
 * @str: prints a string
 * Return: 0
 */
void _puts(char *str)
{
	int length;

	length = 0;
	while (str[length] != '\0')
	{
		_putchar(str[length]);
		length++;
	}
}
