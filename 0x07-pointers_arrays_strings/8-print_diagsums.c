#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print tge sum of the 2 duagonals of an array
 * @a: Array
 * @size: Size of the array
 */

void print_diagsums(int *a, int size)
{
	int i, j, diag1, diag2, sum1, sum2;

	i = j = sum1 = sum2 = 0;
	while (i < size)
	{
		diag1 = a[i][j];
		sum1 = sum1 + diag1; /* Adds to former value in each iteration*/
		++i;
		++j;
	}
	i = 0; /* j is reinitialized because of the loop */
	while (j >= 0)
	{
		diag2 = a[i][j];
		sum2 = sum2 + diag2;
		++i;
		--j;
	}
	printf("%d, %d\n", sum1, sum2);
}
