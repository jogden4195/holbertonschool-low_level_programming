#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory bloc using malloc
 * and free
 * @ptr: pointer to the memory previously allocated with a
 * call to malloc: malloc(old_size)
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes, of the new memory block
 *
 * Return: pointer to newly reallocated block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *t;
	char *p;
	char *pptr;
	unsigned int size;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		t = malloc(new_size);
		if (t == NULL)
			return (NULL);
		return (t);
	}
	t = malloc(new_size);
	if (t == NULL)
		return (NULL);
	size = new_size;
	p = t;
	pptr = ptr;
	for (p = t; size--;)
		*p++ = *pptr++;
	free(ptr);
	return (t);
}
