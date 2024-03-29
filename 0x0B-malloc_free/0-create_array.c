#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create and intitialize a dynamic array
 * @size: Array size
 * @c: Initialization character
 *
 * Return: Pointer to array (Success)
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *m;

	if (size == 0)
		return ('\0');
	m  = malloc(sizeof(char) * size); /* 1 is the size of one byte */
	if (m == NULL)
		return ('\0');
	i = 0;
	while (size--)
	{
		m[i] = c;
		i++;
	}
	return (m);
}
