#include "hash_tables.h"

/**
 * key_index - Returns an index of a hash table corresponding to a  key(string)
 * @key: String to be used in generating a hashed value
 * @size: size of tge array
 *
 * Return: index of the array of a hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);
	return (hash_value % size);
}
