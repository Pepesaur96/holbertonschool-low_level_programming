#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *free_grid - frees a 2 dimensional grid previously created
 *@grid: input
 *@height: input
 */

void free_grid(int **grid, int height)
{
int i = 0;

	if (grid == NULL)
		return;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}

	free(grid);
}
