#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - info about a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner of dog
 *
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

#endif /* _DOG_H_ */