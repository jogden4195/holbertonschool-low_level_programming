#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
int _strlen(char *s);
char *_strdup(char *str);
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
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);
	if (_strdup(name) == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = _strdup(name);
	new_dog->age = age;
	if (_strdup(owner) == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = _strdup(owner);
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

/**
 * *_strdup - returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a
 * parameter
 * @str: string we are copying into new array
 *
 * Return: pointer to new array if success (char), NULL if str
 * is empty or insufficient memory was available
 */
char *_strdup(char *str)
{
	char *t;
	int i = 0, size;

	if (str == NULL)
	return (NULL);
	size = _strlen(str) + 1;
	t = malloc(size * sizeof(char));
	if (t == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		t[i] = str[i];
		i++;
	}
  	t[i] = '\0';
	return (t);
}
