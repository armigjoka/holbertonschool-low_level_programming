#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: prints every character of a string
 * Return: 0
 */
void puts2(char *str)
{
	int length, j;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	for (j = 0; j < length; j = j + 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
