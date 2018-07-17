#include "holberton.h"
#include <stdlib.h>
int _strlen(char *s);

/**
 * str_concat - concatenates two strings
 * @s1: the string we are concatenating to
 * @s2: the string we are concatenating
 *
 * Return: pointer to newly allocated space in memory with
 * concatenated strings (char) or NULL if failure
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, size1, size2;
	char *t;

	if (s1 != NULL)
		size1 = _strlen(s1);
	else
		size1 = 0;
	if (s2 != NULL)
		size2 = _strlen(s2);
	else
		size2 = 0;
	t = malloc(sizeof(char) * (size1 + size2 + 1));
	if (t == NULL)
		return (NULL);
	while (i < size1)
	{
		t[i] = s1[i];
		i++;
	}
	while (i < size1 + size2)
	{
		t[i] = s2[j];
		i++;
		j++;
	}
	t[i] = '\0';
	return (t);
}

/**
 * _strlen - gets length of string
 * @s: string we are getting the length of
 *
 * Return: length of string (int)
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}
