#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of nmemb elements
 * of size bytes each and returns a pointer to the allocated
 * memory
 * @nmemb: size of array
 * @size: size of array elements
 *
 * Return: pointer to allocated memory if success, NULL if
 * failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *t;

	if (nmemb == 0 || size == 0)
		return (NULL);
	t = malloc(nmemb * size);
	if (t == NULL)
		return (NULL);
	while (i < nmemb)
	{
		t[i] = 0;
		i++;
	}
	return ((void *)t);
}

	
