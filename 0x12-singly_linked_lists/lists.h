#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - Singly linked list
 * @str: malloc'ed string
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: Singly linked list node structure
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;


/**
 * size_t - Typedef for an int
 */

typedef long unsigned int size_t;



/* Function Prototypes */
int _putchar(int);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif
