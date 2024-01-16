#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees allocated memory of a 2D array
 * @grid: 2D array
 * @height: Columns of values in the array
 *
 * Return: Pointer to freed array of pointers (Success)
 */

void free_grid(int **grid, int height)
{
	int **m;
	int i;

	m = grid;
	if (m == NULL)
		return;
	i = 0;
	while (i < height)
	{
		free(m[i]);
		++i;
	}
	free(m);
}
