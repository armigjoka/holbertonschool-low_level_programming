#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - entry point
 * @s1: first contains
 * @s2: second contains
 * @n: int
 * Return: p
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int lens1, lens2, str, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (lens1 = 0; s1[lens1] != '\0'; lens1++)
	{
		;
	}
	for (lens2 = 0; s2[lens2] != '\0'; lens2++)
	{
		;
	}
	if (n > lens2)
		n = lens2;
	str = lens1 + n;
	p = (malloc(str + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < str; j++)
	{
		if (j < lens1)
			p[j] = s1[j];
		else
			p[j] = s2[j - lens1];
	}
	p[j] = '\0';
	return (p);
}






