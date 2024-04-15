#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table of struct @hash_table_t
 * @size: size of the array
 *
 * Return: Memory location of the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;
	int i;

	new_hash = malloc(sizeof(hash_table_t));
	if (new_hash == NULL)
		return (NULL);
	new_hash->size = size; /* size is the size of array param entered */
	new_hash->array = calloc(size, sizeof(hash_node_t));/*pointer array*/
	if (new_hash->array == NULL)
		return (NULL);
	for (i = 0; i < (int)size; ++i)/*set all ind pointers in array to NULL*/
		new_hash->array[i] = NULL;
	return (new_hash); /* the new hash table with malloc'ed cells*/
}
