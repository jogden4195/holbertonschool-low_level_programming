#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - info about a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner of dog
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* _DOG_H_ */
