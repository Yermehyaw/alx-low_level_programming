#include "hash_tables.h"

/**
 * hash_djb2 - Hashes a key @str
 * @str: Hask key/string. Used to generate the hash value
 *
 * Return: An int representibg the hash
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
