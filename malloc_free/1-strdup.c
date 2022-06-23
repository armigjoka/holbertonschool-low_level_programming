#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - entry point
 * @str: string array
 * Return: pointer to string
 */
char *_strdup(char *str)
{
	char *a;
	int len, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (len = 0; str[len] != '\0'; len++)
	{
	}
	a = malloc(len * sizeof(char) + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < len; j++)
	{
		a[j] = str[j];
	}
	return (a);
}
