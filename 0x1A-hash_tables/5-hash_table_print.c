#include "hash_tables.h"

/**
 * hash_table_print - Prints the value and keys of a hash table in the order
 * they are stored
 * @ht: hash table
 *
 * Description: The intended style of output shoukd be like a py dict e.g:
 * {'Betty': 'Cool', 'python': 'awesome', 'Bob': 'and Kris love asm'} or
 * {} if empty or NULL
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size, i;
	hash_node_t **arr, *temp1, *temp2, *placeholder;
	char *key, *value;

	if (ht == NULL)
	{
		printf("{}\n");
		return;
	}
	arr = ht->array;
	size = ht->size;
	placeholder = malloc(sizeof(hash_node_t)); /*placeholding mem address*/
	temp2 = placeholder; /*temp2 shld not be NULL in first iteration*/
	printf("{"); /* Begin dict style printing */
	/* Accessing the cells/nodes in the hash table*/
	for (i = 0; i < size; ++i)
	{
		temp1 = arr[i];
		if (temp1 == NULL) /* No data stored in that index */
			continue;
		while (temp1)/* i.e while temp is not equal to NULL*/
		{
			if (temp2 == NULL) /**
					    * temp2 will be NULL if the second
					    * while loop in acessing nodes execs
					    */
			{
				printf(", ");
				temp2 = placeholder; /*Placeholder*/
			}
			key = temp1->key;
			value = temp1->value;
			printf("'%s': '%s'", key, value);
			temp2 = temp1->next;
			while (temp2) /* Nodes of separate chaining */
			{
				key = temp2->key;
				value = temp2->value;
				printf("'%s': '%s'", key, value);
				temp2 = temp2->next;
				if (temp2 != NULL)
					printf(", ");
			}
			temp1 = temp1->next;
		}
	}
	printf("}\n");
	free(placeholder);
}
