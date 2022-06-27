#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - entry point
 * @b: unsigned int
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}
