#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - Allocate anu desired memory
 * @b: Size of memeory to be allocated
 *
 * Return: Pointer to allocated memory (Success)
 */

void *malloc_checked(unsigned int b)
{
	void *m;

	if (!(b < INT_MAX))
		exit(98);
	m = malloc(b * 1);
	if (m == NULL)
		exit(98);
	return (m);
}
