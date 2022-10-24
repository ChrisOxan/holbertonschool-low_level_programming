#include "main.h"

/**
 * free_grid -  It's not bragging if you can back it up
 *
 * @grid:Write a function that frees a 2 dimensional grid
 * @height: previously created by your alloc_grid function.
 *
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
