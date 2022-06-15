#include "main.h"
/**
 * puts_half - entry
 * @str: prints half of a string
 * Return: 0
 */
void puts_half(char *str)
{
	int length = 0;
	int half;
	int j;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
		half = length / 2;
	else
	{
		half = (length + 1) / 2;
	}
	for (j = half; j < length; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
