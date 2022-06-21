#include "main.h"
#include <stdio.h>

/**
 * *_strncat - entry
 * @src: function that concatenates two string
 * @dest: function of two string
 * @n: bytes from src
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
		while (src[j] != '\0' && j < n)
		{
			dest[i + j] = src[j];
			j++;
		}
	dest[i + j] = '\0';
	return (dest);
}
