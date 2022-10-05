#include "main.h"
#include <stdio.h>

/**
 * free_grid - function that frees 2 dimensional array
 * @grid: address of the 2dimensional array
 * @height: height of the grid
 *
 * Return: success
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
