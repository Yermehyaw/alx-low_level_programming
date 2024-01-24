#include "dog.h"
#include <stdlib.h>

char *copy(char *);

/**
 * new_dog - Initializes its parameter to a new struct variable
 * @name: Name
 * @age: Age
 * @owner: Owner
 *
 * Return: Pointer to a memory address which has all its parameters
 * as struct variable elements (Success)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *sm;

	sm = malloc(sizeof(dog_t));
	if (sm == NULL)
		return (NULL);
	sm->name = copy(name);
	sm->owner = copy(owner);
	sm->age = age;
	return (sm);
}

/**
 * copy - Makes a copy of a string in heap(via dynamic alloc)
 * @str: String
 *
 * Return: Pointer to new storage location of string in memry (Success)
 */

char *copy(char *str)
{
	char *m;
	int i;

	m = malloc(sizeof(char *));
	if (m == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		m[i] = str[i];
		++i;
	}
	m[i] = '\0';
	return (m);
}
