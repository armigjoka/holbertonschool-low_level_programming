#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - entry point
 * @s1: first contains
 * @s2: second contains
 *
 * Return: NUll
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	int size1, size2, l = 0, j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (size1 = 0; s1[size1] != '\0'; size1++)
	{
	}
	for (size2 = 0; s2[size2] != '\0'; size2++)
	{
	}
	a = malloc((size1 + size2) * sizeof(char) + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < size2; j++)
	{
		a[l] = s2[j];
		j++;
	}
	return (a);
}
