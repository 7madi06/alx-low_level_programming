#include <stdlib.h>

/**
 * free_grid - returns a pointer to a 2 dimensional array of integers.
 * @grid: 2d array.
 * @height: height of the array.
 * Return: pointer.
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
