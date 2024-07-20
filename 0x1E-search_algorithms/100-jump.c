#include <stdio.h>
#include <math.h>
#include "search_algos.h"

int linear_search_jump(int *array, size_t idx, size_t size, int value);

/**
 * jump_search - Implemets the jump search algorithm for finding a give value
 * in an array
 * @array: an array of ints
 * @size: size of the array
 * @value: the value to be located in the array
 *
 * Return: The index where @value is first located (Success), otherwise -1
 */

int jump_search(int *array, size_t size, int value)
{
	int i, j, ret, jump_step;

	i = j = ret = 0;
	jump_step = sqrt(size);
	if (array == NULL || size == 0)
		return (-1);
	if (size == 1)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		return (0); /* index for an array with one elem */
	}
	j += jump_step;
	while (j < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", i,  array[i]);
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		if (array[i] <= value && array[j] >= value)
		{
			printf("Value found between indexes [%d] and\
					[%d]\n", i, j);
			ret = linear_search_jump(array, i, size, value);
			return (ret);
		}
		i += jump_step; /* i jumps by one step */
		j += jump_step; /* j jumps by one step */
		if (j > (int)size) /* j has exceeded index bounds */
		{
			j -= jump_step; /* bring j back within index bounds */
			if (array[j] < value)
			{
				printf("Value found between indexes [%d] and\
						[%ld]\n", j, size - 1);
				ret = linear_search_jump(array, j, size, value);
				return (ret);

			}
		}
	}
	return (-1);
}


/**
 * linear_search_jump - implement the linear search algorithm needed in jump
 *  search
 * @array: an array of ints
 * @idx: index from which linear searching is to begin
 * @size:size of the array
 * @value: the value to be located, if present
 *
 * Return: The index where value is first located
 */


int linear_search_jump(int *array, size_t idx, size_t size, int value)
{
	for (; idx < size; ++idx) /*init part of a for loop can be empty */
	{
		if (array[idx] == value)
			return (idx);
	}
	return (-1);
}
