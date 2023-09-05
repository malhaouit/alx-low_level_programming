#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Create a pointer to two dimensional array of integers
 * @width: The number of row elements
 * @height: The number of culumn elements
 *
 * Return: A pointer if success or NULL if failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

		for (k = 0; k < width; k++)
			grid[i][k] = 0;
	}
	return (grid);
}
