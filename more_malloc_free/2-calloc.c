#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - entry point
 * @nmemb: elements of size bytes
 * @size: int
 * Return: s
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	if (nmemb == 0)
	{
		return (NULL);
	}
	s = malloc((nmemb) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = size;
		i++;
	}
	s[i] = '\0';
	return (s);
}
