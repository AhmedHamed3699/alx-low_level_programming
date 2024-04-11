#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a 2 dimensional array of integers
 * @grid: pointer to the array that needed to be freed
 * @height: hight of the array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
