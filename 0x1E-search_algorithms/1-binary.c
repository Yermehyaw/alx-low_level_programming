#include <stdio.h>
#include "search_algos.h"

int divide_and_conquer(int *sorted_arr, size_t size, int value);
void print_array(int *array, size_t size);
int *right_arr(int *sorted_arr, size_t size, int mid_right);
int *left_arr(int *sorted_arr, size_t size, int mid_left);

/**
 * binary_search - Implements the binary search algo. on an array
 * @array: the array to search
 * @size: size of the array
 * @value: value to find in the array
 *
 * Return: Index where value is located (Success). Otherwise, -1
 */

int binary_search(int *array, size_t size, int value)
{
	int found;

	if (array == NULL || size == 0)
		return (-1);
	if (size == 1)  /* Array of size 1*/
		return (0);
	found = divide_and_conquer(array, size, value);
	return (found);  /*if -1, value was not found in the array*/
}


/**
 * divide_and_conquer - Inplement the recursioms needed in the algorithm
 * @sorted_arr: array sorted in increasing order
 * @size: size of the array
 * @value: value to find in array
 *
 * Description: Please note that references made to @mid and @mid_idx in
 * the code refer to two different variables. @mid is the value at the middle
 * index derived when size is divided by 2, while @mid_idx is true index where
 * the middle value is found in the array. Thus @mid_idx = @mid - 1.
 * @mid isnt used directly due to dicripencies that occur as the array grows
 * smaller during successive recursive calls.
 * In summary:
 * array[mid] is the value right of the middle value
 * array[mid - 1] is the value middle value itself and;
 * array[mis - 2] is the value left of the middle value
 *
 * - recur means recursion
 *
 * Return: The index where the value is located, otherwise, -1
 */

int divide_and_conquer(int *sorted_arr, size_t size, int value)
{
	int *new_arr;
	int mid;

	mid = size / 2;/*DONT REDUCE TO INDEX VALUE,* see @Description*/
	/* Base-case  */
	if (sorted_arr[mid - 1] == value)
		return (mid - 1); /*return the very index where the value is */
	/* Recursive calls */
	if (size) /*Only an array with at least 2 elems can be divided */
	{
		/*Split array call function recursively on the appr subarray*/
		if (value > sorted_arr[mid - 1])/*yes? take right subarray*/
		{
			/**
			 * the array is sorted in ascending order, so the if the
			 * value right of the mid_idx is less than the value of
			 * interest, it shows that the value of interest is
			 * large and thus at the right hand side of the array
			 */
			print_array(sorted_arr, size);
			size = size - mid; /*new size param*/
			new_arr = right_arr(sorted_arr, size, mid);
			while (1)
                        {
                                printf("divide anconquer called\n");
                                break;
                        }

			divide_and_conquer(new_arr, size, value);/*recur right*/
		}
		else if (value < sorted_arr[mid - 1])/*yes?, take the left arr*/
		{
			print_array(sorted_arr, size);
			size = mid;
			new_arr = left_arr(sorted_arr, size, mid - 1);
			while (1)
			{
				printf("divide anconquer called\n");
				break;
			}
			divide_and_conquer(new_arr, size, value);/*recur left*/
		}
	}
	return (-1);  /* control flow may never reach here ;) */
}


/**
 * print_array - prints an array of ints
 * @array: array
 * @size: size of array to print
 *
 * Description:
 * - rem means remaining
 */
void print_array(int *array, size_t size)
{
	size_t i;

	/*This printing format is a task req*/
	if (size >= 1) /*If the array has at least one element*/
	{
		printf("Searching in array: %d", array[0]);
		printf("\nOutside the loop\n");
		for (i = 1; i < size; ++i) /*print rem  elem on the same line*/
		{
			printf("Inside the loop\n");
			printf(", %d", array[i]);
			if (i == (size - 1)) /*print a newline at the last iteration*/
				printf("\n");
		}
	}
	else /*not sure if still needed*/
		printf("Searching in array:");
}


/**
 * right_arr - copies an array from @mid_right till end of the array
 * @sorted_arr: the array
 * @size: size of @sorted_arr
 * @mid_right: the first index of the sub array to be returned
 *
 * Return: a partitioned array
 */

int *right_arr(int *sorted_arr, size_t size, int mid_right)
{
	static int new_arr[10]; /* 10 is just a placeholder */
	size_t i;

	/**
	 * mid_right is of an index range and should iterate till
	 * the very end of the array
	 */
	for (i = 0; mid_right <= (int)size; ++i, ++mid_right)
		new_arr[i] = sorted_arr[mid_right];
	return (new_arr); /**
			   * non-dynamically allocated  arrays can only be
			   * returned if declared as static
			   */
}


/**
 * left_arr - copies an array from @mid_left till end of the array
 * @sorted_arr: the array
 * @size: size of @sorted_arr
 * @mid_left: the last index of the sub array to be returned
 *
 * Return: a partitioned  array
 */

int *left_arr(int *sorted_arr, size_t size, int mid_left)
{
	static int new_arr[10]; /* 10 is just a placeholder */
	size_t i;

	/**
	 * mid_left is of an index range, thus <= is used to ensure the
	 * very last value in the array is copied
	 */
	for (i = 0; (int)i <= mid_left && i < size; ++i)
		new_arr[i] = sorted_arr[i];
	return (new_arr);
}
