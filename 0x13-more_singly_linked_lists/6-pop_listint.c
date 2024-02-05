#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a linked list
 * @head: A pointer to a pointer to the head node
 *
 * Return: The ibt data stored at the head node - if available (Success)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int s;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	s = temp->n;
	free(temp);
	return (s);
}
