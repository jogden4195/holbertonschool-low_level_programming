#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: the string that we will get the length of
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
