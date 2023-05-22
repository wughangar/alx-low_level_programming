#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees the grid
 * @grid: the grid to be freed
 * @height: height of the grid
 *
 * Retunr: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
	free(grid[i]);
	}

	free(grid);
}
