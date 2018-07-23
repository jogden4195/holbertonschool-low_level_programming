#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: the dog we are initializing
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner of the dog
 *
 * Return: none
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
  	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
