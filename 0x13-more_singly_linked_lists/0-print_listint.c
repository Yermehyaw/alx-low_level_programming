#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_listint - Print all elements in a list
 * @h: Pointer to head node
 *
 * Return: No of nodes (Success)
 */

size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; ++i)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
