#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Information on a dog
 * @name: Name of the dog
 * @age: Dogs age
 * @owner: Dogs owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


/* Function prototypes start */

void init_dog(struct dog *d, char *name, float age, char *owner);

/* Function prototypes end */

#endif /* #ifndef DOG_H */
