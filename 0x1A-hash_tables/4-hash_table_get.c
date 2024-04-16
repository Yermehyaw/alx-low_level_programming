#include "hash_tables.h"

/**
 * hash_table_get - Returns the value associated witha key of a hash table7
 * @ht: hash table
 * @key: hash key/string
 *
 * Return: string @value (char *)
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t **arr, *temp;

	if (strcmp(key, "") == 0 || key == NULL)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	arr = ht->array;
	if (arr == NULL)
		return (NULL);
	if (strcmp(arr[idx]->key, key) == 0)
		return (arr[idx]->value);
	else
	{
		temp = arr[idx];
		while (temp)
		{
			if(strcmp(temp->key, key) == 0)
				return (temp->value);
			temp = temp->next;
		}
	}
	return (NULL);
}
