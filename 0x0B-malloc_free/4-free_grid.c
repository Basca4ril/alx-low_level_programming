#include <stdlib.h>

/**
 * free_grid - frees grid memory
 * @grid: pointer to array
 * @height: height
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);

		free(grid);
	}
}
