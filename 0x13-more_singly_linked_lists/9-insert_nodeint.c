#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts  anode at nth index
 * @head: Pointer to apointer to a head node
 * @idx: Index no
 * @n: Struct intialization value
 *
 * Return: Valid memory address (Success)
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp, *temp1;
	unsigned int count;

	count = idx;
	++count;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	temp = *head;
	while (count != 0)/* Move to the index */
	{
		if (temp->next == NULL)
			return (NULL);
		temp = temp->next;
		--count;
	}
	temp1 = temp->next; /* Point temp1 to next node after the index node */
	temp->next = new; /* Connect the index npde to new node */
	new->next = temp1; /* Connect the new node to previous link */
	return (new);
}
