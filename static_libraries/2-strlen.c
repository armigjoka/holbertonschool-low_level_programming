#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: return length of string
 *
 * Return:  strlen
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
