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


/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;


/* Function prototypes start */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *);
dog_t *new_dog(char *name, float age, char *owner);

/* Function prototypes end */

#endif /* #ifndef DOG_H */
