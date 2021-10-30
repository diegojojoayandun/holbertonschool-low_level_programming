#include <stdlib.h>

/**
 * free_grid -  frees a 2 dimensional grid previously created by your alloc_grid
 * @grid: The array to free memory
 * @height: height
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
