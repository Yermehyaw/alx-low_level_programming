#include "main.h"
#include <stdlib.h>

/**
 * array_range - Create an array of ints from min to max
 * @min: Starting int
 * @max: Ending int
 *
 * Return: Pointer to location of array in mem (Success)
 */

int *array_range(int min, int max)
{
	int *m;
	int i;

	if (min > max)
		return (NULL);
	m = malloc((max - min + 1) * sizeof(min));
	if (m == NULL)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		m[i] = min;
		++i;
		++min;
	}
	return (m);
}
