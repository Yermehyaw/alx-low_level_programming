#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * dlistint_len - Returns no of nodes in a linked list
 * @h: Head node pointer
 *
 * Return: An unsigned int (Success)
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i;
	dlistint_t *temp;

	if (h == NULL)
		return (0);
	temp = (dlistint_t *)h;
	for (i = 0; temp != NULL; ++i)
		temp = temp->next;
	return (i);
}
