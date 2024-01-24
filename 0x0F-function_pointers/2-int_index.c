#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Search for an  integer in an array
 * @array: Array
 * @size: Size of array
 * @cmp: Function pointer
 *
 *
 * Return: Index of the found int (Success)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, inx;

	if (array == NULL || cmp == NULL)
		exit(EXIT_FAILURE);
	if (size <= 0)
		return (-1);
	i = 0;
	while (i < size)
	{
		inx = (*cmp)(array[i]);
		if (inx != 0)
			return (i);
		++i;
	}
	return (-1); /**
		      * No elem of array matches the int being checked
		      * for by the function pointed to
		      */
}
