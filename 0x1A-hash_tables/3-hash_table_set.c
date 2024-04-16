#include "hash_tables.h"

/**
 * hash_table_set - Initializes value and key to a hash_table
 * @ht: hash table
 * @key: index identifier
 * @value: value to be stored
 *
 * Description: @key is a string which will be used to generate a valid index
 * in the hash table @ht. This index is generated first by hashing with the
 * djb2 algorithm @hash_djb2(), then by a mapping/indexing function
 * @hash_index() to produce the required index.
 *
 * Return: Always 1 (Success)
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t **arr;
	hash_node_t *cell_node, *temp;

	if (ht == NULL)
		return (0);
	arr = ht->array; /* get the array for ease of syntax */
	if (strcmp(key, "") == 0 || (key ==  NULL)) /* key cannot be empty */
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);/*Generate index*/
	cell_node = malloc(sizeof(hash_node_t));
	if (cell_node == NULL)
		return (0);
	temp = arr[idx];/*temp now holds the array cell mem address*/
	if (temp != NULL) /*a node already exists in this index.*/
		/* Add new cell node to beginning of linked list*/
		cell_node->next = temp->next;/**
					      * points cell_node's *next to
					      * whatever arr[index] was
					      * initially pointing to i.e either
					      * NULL or a mem address
					      */
	arr[idx] = cell_node; /*mem addr at that index is now cell_node's*/
	strcpy(cell_node->value, value);/* initialize irs value & key*/
	strcpy(cell_node->key, key);
	return (1);
}
