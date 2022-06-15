#include "main.h"
/**
 * rev_string - entry
 * @s: reverses a string
 * Return: reverse a string
 */
void rev_string(char *s)
{
	int i, j, tmp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i - 1; j >= i / 2; j--)
	{
		tmp = s[i];
		s[j] = s[i - j - 1];
		s[i - j - 1] = tmp;
	}
}
