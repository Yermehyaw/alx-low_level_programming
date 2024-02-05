#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * listint_len - Print all elements in a list
 * @h: Pointer to head node
 *
 * Return: No of elements (Success)
 */

size_t listint_len(const listint_t *h)
{
	size_t elem;

	elem = 0;
	while (h != NULL)
	{
		++elem;
		h = h->next;
	}
	return (elem);
}
