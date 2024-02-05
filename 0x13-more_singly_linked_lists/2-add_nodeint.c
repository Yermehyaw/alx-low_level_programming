#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_nodeint - Adds node at the beginning of a linked list
 * @head: Pointer to poinuter to NULL
 * @n: Value to be added to the @listint_t struct
 *
 * Return: Memory location of the new node (Success)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	temp = *head;
	*head = new;
	new->next = temp;
	new->n = n;
	return (new);
}
