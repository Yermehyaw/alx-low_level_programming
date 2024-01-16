#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Create a 2D array of ints
 * @width: Row of integers
 * @height: Column of integers
 *
 * Return: Pointer to array of pointers - 2D array (Success)
 */

int **alloc_grid(int width, int height)
{
	int **m;
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);
	m = malloc(height * 8); /* First element of each array */
	if (m == NULL)
		return (NULL);
	for (i = 0; i < width; ++i)
	{
		m[i] = malloc(width * 4); /* This are the ints */
		if (m[i] == NULL)
		{
			for (k = 0; k <= i; ++k)
				free(m[k]);
			free(m);
			return (NULL);
		}
	}
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			m[i][j] = 0;
			++j;
		}
		++i;
	}
	return (m);
}
