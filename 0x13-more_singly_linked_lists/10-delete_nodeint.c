#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Delete at node at given index
 * @head: Pointer to pointer to head node
 * @index: index no
 *
 * Return: 1 (Success), -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *temp;
	listint_t *temp1;
	listint_t *temp2;

	count = index;
	temp = *head;
	while (count != 0)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
		--count;
	}
	temp1 = temp->next;
	temp2 = temp1->next;
	free(temp1);
	temp->next = temp2;
	return (1);
}
