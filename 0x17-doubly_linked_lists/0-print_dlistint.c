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
	dlistint_t *temp;

	if (h == NULL)
		return (0);
	temp = (dlistint_t *)h;
	i = 0;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		++i;
	}
	return (i);
}
