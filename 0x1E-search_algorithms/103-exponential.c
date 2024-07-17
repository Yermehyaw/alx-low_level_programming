#include <stdio.h>
#include "search_algos.h"

/**
 * exponential_search - Implement the exponential search algorithm
 * @array: an array of ints
 * @size: size of the array
 * @value: value to be located
 *
 * Return: The index where @value is first located
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i, low_range, exp, high_range, range, ret;

	i = low_range = 0;
	exp = low_range + (2 ** i); /* starting value */
	high_range = exp;
	while (high_range < size)
	{
		printf("Value checked array[%d] = [%d]\n", high_range);
		range = high_range - low_range;
		++i;
		hih=gh_range = low_range + 
	}
}
