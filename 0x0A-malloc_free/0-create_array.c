#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *create_array - creates an array of chars and initializes it
 * with a specific char
 * @size: the size of our array (unsigned int)
 * @c: char we are initializing our array with
 *
 * Return: pointer to the array; NULL if size is 0 or malloc fails
 */

char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i = 0;

	if (size == 0)
		return ('\0');
	t = malloc(sizeof(*t) * size);
	if (t == NULL)
		return ('\0');
	for (i = 0; i < size; i++)
		t[i] = c;
	return (t);
}
