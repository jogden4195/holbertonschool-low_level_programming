#include "holberton.h"
#include <stdlib.h>
void bzero(void *to, size_t count);

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
	void *t;

	if (nmemb == 0 || size == 0)
		return (NULL);
	t = malloc(nmemb * size);
	if (t == NULL)
		return (NULL);
	bzero(t, nmemb * size);
	return (t);
}

/**
 * bzero - initializes our void array
 * @to: the array we are initializing
 * @count: size of the array
 *
 * Return: nothing
 */
void bzero(void *to, size_t count)
{
	char *t;

	for (t = to; count--;)
		*t++ = '\0';
}
