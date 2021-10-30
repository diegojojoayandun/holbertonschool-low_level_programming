#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Create a 2 dimensional array
 * @width: Width of grid, columns
 * @height: Height of grid, rows
 * Return: Pointer
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	i = 0;
	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(height * sizeof(*ptr));
	if (grid == NULL)
	{
		free(ptr);
		return (NULL);
	}
	while (i < height)
	{
		ptr[i] = malloc(width * sizeof(**ptr));
		if (ptr[i] == NULL)
		{
			i--;
			while (i >= 0)
			{
				free(ptr[i]);
				i--;
			}
			free(ptr);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			ptr[i][j] = 0;
			j++;
		}
		i++;
	}
	i = 0;
	return (ptr);
}
