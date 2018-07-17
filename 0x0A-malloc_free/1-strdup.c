#include "holberton.h"
#include <stdlib.h>
int _strlen(char *s);
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

/**
 * _strlen - returns the length of a string
 * @s: string we are checking the length of
 *
 * Return: Length (int)
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}
