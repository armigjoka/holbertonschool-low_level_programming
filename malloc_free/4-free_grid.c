#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - empty point
 * @grid: pointer to grid of int type
 * @height: int type
 * Return: free the memory
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height;  i++)
	{
		free(grid[i]);
	}
	free(grid);
}
