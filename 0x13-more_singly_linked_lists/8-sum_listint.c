#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * sum_listint - Returns the sum of daat in a linked list
 * @head: Pointer to head node
 *
 * Return: Any valid memory address (Success)
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
