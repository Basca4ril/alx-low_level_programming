#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocates 2 dimensional array
 * @width: Width
 * @height: Height
 * Return: Pointer to array
 */

int **alloc_grid(int width, int height)
{
	int **grid = (int **)malloc(sizeof(int *) * height);
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;

	}
	return (grid);
}
