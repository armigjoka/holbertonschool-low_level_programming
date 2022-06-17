#include "main.h"
#include <stdio.h>
/**
 * _memset - entry
 * @b: constant byte
 * @s: memory area pointed
 * @n: n bytes
 *
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
       	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
