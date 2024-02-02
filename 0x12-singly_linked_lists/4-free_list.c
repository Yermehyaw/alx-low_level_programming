#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * free_list - Frees memery used by a linked list
 * @head: Pointer to head or starting node
 *
 * Return: No of data elements in list (Success)
 */

void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (head != NULL)
	{
		temp = (head->next)->next;
		head = head->next;
		free(head);
		head = temp;
	}
}
