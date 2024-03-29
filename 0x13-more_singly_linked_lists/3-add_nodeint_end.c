#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_nodeint_end - Add node at the end of a linked list
 * @head: Pointer to a pointer to NULL
 * @n: Integer to be added
 *
 * Return: .emory address of the new node (Success)
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->n = n;
	temp = *head; /* Hold the intitial position of head*/
	if (temp == NULL)
		temp = new;
	else
	{
		while (temp != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
