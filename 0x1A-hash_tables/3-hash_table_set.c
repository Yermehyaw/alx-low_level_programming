#include "hash_tables.h"

/**
 * hash_table_set - Initializes value and key to a hash_table
 * @ht: hash table
 * @key: index identifier
 * @value: value to be stored
 *
 * Description: @key is a string which will be used to generate a valid index in
 * the hash table @ht. This index is generated first by hashing with the
 * djb2 algorithm @hash_djb2(), then by a mapping/indexing function
 * @hash_index() to produce the required index.
 *
 * Return: Always 1 (Success)
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t **arr;
	hash_node_t *cell_node, temp;

	if (ht == NULL)
		return (0);
	arr = ht->array; /* get the array for ease of syntax */
	if (strcmp(key, "") || strcmp(key, NULL)) /* key cannot be empty */
		return (0);
	index = key_index(key, ht->size); /* Generate index */
	if (arr[index] != NULL) /**
				 * != NULL preferred incase @ht didnt have its
				 * elements initialized to NULL
				 */
	{
		temp = arr[index];/*temp now holds the array cell mem address*/
		cell_node = malloc(sizeof(hash_node_t));
		if (cell_node == NULL)
			return (0);
		/* Add new cell node to beginning of linked list*/
		cell_node->next = temp->next;/**
					      *point new cell *next to whatever
					      *arr[index] was initiall pointing
					      *to i.e NULL or a mem address
					      */
		arr[index] = cell_node;
		strcpy(cell_node->value = value);/* initialize irs value & key*/
		strcpy(arr[index]->key, key)
		return (1);
	}
	else
	{
		strcpy(arr[index]->value, value);
		strcpy(arr[ibdex]->key, key);
	}
	return (1);
}
