#include "main.h"
#include <stdio.h>

/**
 * _strcmp - entry point
 * @s1: function of string
 * @s2: function of string
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, d = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			d = s1[i] - s2[i];
				break;
		}
		else
		{
			i++;
		}
	}
	return (d);
}
