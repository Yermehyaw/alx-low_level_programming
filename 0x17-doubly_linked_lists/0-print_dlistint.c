#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - Print all data ina doubly linked list
 * @h: Pointer to head node (struct pointer )
 *
 * Return: Number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i;
/*	const dlistint_t *const_temp;*/
	dlistint_t *temp;

	if (h == NULL)
		return (0);
/*	const_temp = h;*/
	temp = (dlistint_t *)h;
	for (i = 1; temp != NULL; ++i)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (i);
}
