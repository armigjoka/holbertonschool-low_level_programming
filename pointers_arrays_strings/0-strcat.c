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
	int i = 0;

	while (src[i] != '\0')
	{
		src[i] = dest[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
