#include "main.h"

/**
 * free_grid - free a two dimensional grid previously created by your
 * @grid: pointer to grid
 * @height: height of the array
 */
void free_grid(int **grid, int height)
{
	for (height--; height >= 0; height--)
	{
		free(*(grid + height));
	}
	free(grid);
}
