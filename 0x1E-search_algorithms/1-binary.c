#include <stdio.h>
#include "search_algos.h"

void print_array(int *array, int size, int mid);

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
	int mid;

	if (array == NULL || size == 0)
		return (-1);
	mid = ((size / 2) + 0.5) - 1; /* +0.5 for apprxm. and -1 for indexing*/
	while(size >= 1)
	{
		if (array[mid] == value)
			return (mid);
		print_array(array, size, mid);
		if (value < array[mid]) /*Take left sub array*/
		{
			/*Adjust size and mid to fit the new sub array*/
			size = mid;
			mid = (mid - (size / 2) + 0.5) - 1; /*Sighs...*/
		}
		else if (value > array[mid])
		{
			size = size - (mid + 1);
			mid = (mid - ((size / 2) + 0.5)) - 1;
		}
	}
	/*if mid goes out if bounds but array elem still remains*/
	mid = mid + size; /*place mid to valud idx to check last elem in array*/
	if (array[mid] == value)
		return (mid);
	return (-1); /*value is not in array*/
}


/**
 * print_array - prints an array of ints
 * @array: array
 * @size: size of array to print
 * @idx: index to print from
 */

void print_array(int *array, int size, int idx)
{
	int i;

	if (idx < size) /* Its likely a left subarray */
	{
		printf("Searching in array:");
		for (i = 0; i < size; ++i)
		{
			printf(", %d", array[i]);
			if (i == (size - 1))
				printf("\n");
		}
	}
	else if (idx > size) /* likely a right sub array*/
	{
		printf("Searching in array:");
		for (i = idx; i > size; --i)
		{
			printf(", %d", array[i]);
			if ((i - 1) == size)
				printf("\n");
		}
	}
}
