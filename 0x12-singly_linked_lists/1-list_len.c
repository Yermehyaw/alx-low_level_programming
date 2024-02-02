#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * list_len - Return the number of elemwnts in a linked list
 * @h: Pointer to head or starting node
 *
 * Return: No of data elements in list (Success)
 */

size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		++i;
	}
	return (i);
}
