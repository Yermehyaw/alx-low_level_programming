#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table of struct @hash_table_t
 * @size: size of the array
 *
 * Return: Memory location of tge new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;
	hash_node_t *hash_array;
	int i;

	new_hash = malloc(sizeof(hash_table_t));
	if (new_hash == NULL)
		return (NULL);
	new_hash->size = size; /* size is the size of array param entered */
	hash_array = malloc(size * sizeof(hash_node_t));/*each cell is a  struct*/
	if (hash_array == NULL)
		return (NULL);
	i = 0;
	while (i < (int)size)
	{
		hash_array[i] = NULL;
		++i;
	}
	new_hash->array = &hash_array;
	return (new_hash); /* the new hash table with malloc'ed cells*/
}
