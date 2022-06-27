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
	unsigned int i;
	char *s;

	i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	s = malloc(nmemb * size);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = 0;
	}
	s[i] = '\0';
	return (s);
}
