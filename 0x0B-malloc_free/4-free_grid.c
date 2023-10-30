#include "main.h"

/**
 * free_grid - entry point
 * @grid: grid of memories
 * @height: int
 * Return: void
 */


void free_grid(int **grid, int height)
{
	int d = 0;

	for (; d < height; d++)
		free(grid[d]);
	free(grid);
}
