#include "main.h"
/**
 * free_grid - func
 * @grid: grid of memories
 * @height: int
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
		free(grid[j]);
	free(grid);
}
