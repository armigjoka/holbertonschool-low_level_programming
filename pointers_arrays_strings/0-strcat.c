#include "main.h"
#include <stdio.h>

/**
 * _strcat - entry
 * @src: function string that appends to dest string
 * @dest: function that appends the src
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
