#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function that frees 2 dimension array previously created
 * @grid: 2 dimensional array
 * @height: height of grid
 *
 * Return: no return
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}

