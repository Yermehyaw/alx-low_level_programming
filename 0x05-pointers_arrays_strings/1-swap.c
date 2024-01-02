#include "main.h"
/**
 * swap_int - Swap two integer variables
 * @a: First int var
 * @b: Second int var
 */

void swap_int(int *a, int *b)
{
	int a1, b1;

	a1 = *a;
	b1 = *b;
	*a = b1;
	*b = a1;
}
