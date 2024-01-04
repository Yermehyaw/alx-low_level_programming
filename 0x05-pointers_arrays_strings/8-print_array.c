#include "main.h"

/**
 * print_array - Print n elements of an array
 * @a: Array name
 * @n: Number of array elements to be printed
 */

void print_array(int *a, int n)
{
	int i;

	if (n < 0)
		;
	else
	{
		i = 0;
		while (i <= n)
		{
			printf("%d, ", *(a + i));
			++i;
		}
		printf("\n");
	}
}
