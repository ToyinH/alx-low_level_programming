#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional
 * array of integers
 * @width: width of grid
 * @height: height of grid
 *
 * Return: return pointer to 2 dimensional array or NULL if failed
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
/* see each row of the grid as an array with a pointer */
/* so there is another pointer pointing to the pointer of the array */
/* so access the pointer to pointer first then the pointer of the array*/
	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		{
			if (grid[i] == NULL)
			{
				for (j = 0; j < i; j++)
				{
					free(grid[i]);
				}
				free(grid);
				return (NULL);
			}
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
