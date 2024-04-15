#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table of struct @hash_table_t
 * @size: size of the array
 *
 * Return: Memory location of tge new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t *new_hash;
	hash_node_t hash_array[size];
	int i;

	new_hash = malloc(sizeof(hash_table_t));
	if (new_hash == NULL)
		return (NULL);
	new_hash->size = size; /* size is the size of array param entered */
	new_hash->array = &hash_array;
	i = 0;
	while (i < size)
	{
		hash_array[i] = malloc(sizeof(hash_node_t)); /**
							      *each cell is a
							      * struct
							      */
		if (hash_array == NULL)
			return (NULL);
		hash_array[i]->key = NULL;
		hash_array[i]->value = NULL;
		hash_array[i]->next = NULL;
		++i;
	}
	return (new_hash); /* the new hash table with malloc'ed cells*/
}
