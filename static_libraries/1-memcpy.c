#include "main.h"
#include <stdio.h>

/**
 * _memcpy - entry
 * @n: n bytes
 * @src: memory area
 * @dest: memory area
 *
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
