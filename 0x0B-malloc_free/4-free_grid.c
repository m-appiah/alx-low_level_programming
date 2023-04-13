#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees 2 dimensional grid created previously
 * @grid: the grid
 * @height: the height of the grid
 *
 * Return: Always 0 (success)
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		i++;
		free(grid[i]);
	}
	free(grid);
}
