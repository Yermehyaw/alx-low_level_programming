#include <stdio.h>
#include "search_algos.h"

/**
 * interpolation_search - Implements the interpolation search algorithm to be
 * used on an array of ints
 * @array: an array of ints
 * @size: size of the array
 * @value: value to be searched for in the array
 *
 * Description: interpolation search works by the implementation of an
 * interpolation equation in a sorted array. It works best when there is a
 * fairly constant common difference between each successive element in
 * the array
 *
 * Return: The index where the value is first located
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	low = 0; /* first index of the array */
	high = size - 1; /* last index in the array */
	pos = low + (((double)(high - low) / (array[high] - array[low])) * \
			(value - array[low]));
	printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
	if (array[pos] == value) /* Base case */
		return (pos);
	else
	{
		if (array[pos] > value && pos != low)
		{
			/**
			 * Clears throat...
			 * if the index, @pos gotten by the interpolation 
			 * equation is greater than the value to be found,
			 * it implies that the value is on the left-division
			 * of the array (using @pos as the point of reference).
			 * In addition, the index, @pos must not be equal to 
			 * index 0, else, there would be no left division to
			 * return using @new_arr
			 */
			size = pos; /*a left size of 2 is eq to an index of 2*/
			array = new_arr(array, pos, size);
			interpolation_search(array, size, value);
		}
		else if (array[pos] < value && pos != high)
		{
			/**
			 * same implies here, but here its the right-division
			 * that is used and @pos must not be equal to @high
			 * else there would be no right-divison sub array
			 * to return
			 */
			size = pos + 2;/*a right size of 2 pos is < index*/
			array = new_arr(array, pos, size);
			inter_polation_search(array, size, value);
		}
			
	}
	return (-1);
}


/**
 * new_arr - Creates a sub array from a given array about a given index
 * @arr: an array of ints
 * @idx: index of reference
 * @size: size of the array
 *
 * Return: a new sub array
 */

int *new_arr(int *arr, size_t idx, size_t size)
{
	static int new_arr[10]; /* 10 is just as a placeholder */

	for(; idx < size; ++idx)
		new_arr[idx] = arr[idx];
	return (new_arr);
}
