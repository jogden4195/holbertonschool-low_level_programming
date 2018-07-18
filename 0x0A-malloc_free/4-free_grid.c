#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid created by our
 * alloc_grid
 * @grid: the grid that was created by alloc_grid (double ptr)
 * @height: the height of our 2D array (int)
 *
 * Return: none
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);

}
