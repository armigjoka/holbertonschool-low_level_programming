#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - called from main
 * @width: int type
 * @height: int type
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **ar;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ar = malloc(height * sizeof(int *));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(width * sizeof(int));
		if (ar[i] == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(ar[i]);
			}
			free(ar);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ar[i][j] = 0;
		}
	}
	return (ar);
}
