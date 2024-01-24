#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Execute a function on each element of an array
 * @array: Array
 * @size: Size of array
 * @action: Function pointer
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		exit(EXIT_FAILURE);
	i = 0;
	while (i < (int)size)
	{
		(*action)(array[i]);
		++i;
	}
}
