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

	if (nmemb == 0 || size == 0)   /*
					*taking care of nmemb = 0
					*or size = 0 case
					*/
		return (NULL);
	t = malloc(nmemb * size);
	if (t == NULL)                 /*
					*if malloc fails, return
					*NULL
					*/
		return (NULL);
	bzero(t, nmemb * size);        /*
					*this function takes case of
					*the initialization
					*/
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
	char *t;                        /*
					 *since chars are only 1 byte
					 *each, the entire array will
					 *be filled with 0, rather than say
					 *an int which will not initialize
					 *the entire array since we would
					 *basically overflow
					 */

	for (t = to; count--;)          /*
					 *since we cannot dereference a
					 *void pointer, this char pointer t
					 *will be the one to initialize the
					 *array
					 */
		*t++ = '\0';
}
