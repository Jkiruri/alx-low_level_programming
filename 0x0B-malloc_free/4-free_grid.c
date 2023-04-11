#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - This frees 2d array
 * @grid: This is the 2d grid
 * @height: This is the height dimension of grid
 * Description: This frees memory of grid
 * Return: nothing
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
