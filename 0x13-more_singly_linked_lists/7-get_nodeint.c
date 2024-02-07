#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - Returns the address of a node at given index
 * @head: Pointer to head node
 * @index: Index no
 *
 * Return: Any valid memory address (Success)
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	count = index;
	++count;
	while (count != 0)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		--count;
	}
	return (head);
}
