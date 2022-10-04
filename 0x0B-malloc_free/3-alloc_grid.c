#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - allocates a grid, make space and free space
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to grid or null
 **/
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 1)
		return (NULL);

	grid = (int **) malloc(height * sizeof(int));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; j < width; j++)
		grid[i][j] = 0;
	return (grid);
}
