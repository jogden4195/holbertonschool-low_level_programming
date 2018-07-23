#include "dog.h"
#include <stdlib.h>
int _strlen(char *s);

/**
 * new_dog - creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: name of owner of new dog
 *
 * Return: new dog_t or NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, name_len, owner_len;
	char *name_cp;
	char *owner_cp;
	dog_t *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);
	if (name != NULL)
	{
		name_len = _strlen(name);
		name_cp = malloc(sizeof(char) * name_len);
		if (name_cp == NULL)
		{
			free(new_dog);
			return (NULL);
		}
		while (name[i] != '\0')
		{
			name_cp[i] = name[i];
			i++;
		}
		name_cp[i] = '\0';
		new_dog->name = name_cp;
	}
	else
		new_dog->name = NULL;
	new_dog->age = age;
	if (owner != NULL)
	{
		owner_len = _strlen(owner);
		owner_cp = malloc(sizeof(char) * owner_len);
		if (owner_cp == NULL)
		{
			free(name);
		  	free(new_dog);
			return (NULL);
		}
		while (owner[i] != '\0')
		{
			owner_cp[i] = owner[i];
			i++;
		}
		owner_cp[i] = '\0';
		new_dog->owner = owner_cp;
	}
	else
		new_dog->owner = NULL;
	return (new_dog);
}

/**
 * _strlen - gets the length of the str
 * @s: string we are getting length of
 *
 * Return: int
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}
