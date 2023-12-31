#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a sturcture for dog information.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The name of the dog's owner
 *
 * Description: This sturct includes the basic attributes of a dog,
 * including its name, age and owner.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif /* DOG_H */
