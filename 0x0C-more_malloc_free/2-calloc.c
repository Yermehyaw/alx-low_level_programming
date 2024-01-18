#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocate memory using malloc() like calloc()
 * @nmemb: No of array elements
 * @size: Memory size for all elements
 *
 * Return: Pointer to location of allocated memory (Success)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(nmemb * size);
	if (m == NULL)
		return (NULL);
	i = 0;
	while (i < nmemb)
	{
		m[i] = 0;
		++i;
	}
	return (m);
}
