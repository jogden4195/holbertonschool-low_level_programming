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
	void *t;    /*This is going to be our new array */
	char *p;    /*This pointer will be used to initialize our new array*/
	char *pptr; /*We're gonna use this to go through our old array */
	unsigned int size; /*this will be used for our initialization loop*/

	if (new_size == old_size)    /*case where new_size = old_size*/
		return (ptr);
	if (new_size == 0 && ptr != NULL) /*
					   *case where we have ptr but new_size = 0.
					   *we basically just want to free the ptr.
					   */
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)   /*
			    *when ptr is NULL, we want to malloc(newsize) and return
			    *that new memory space
			    */
	{
		t = malloc(new_size);
		if (t == NULL)
			return (NULL);
		return (t);
	}
	t = malloc(new_size);  /*
				*if our args didn't fall under any of the above cate-
				*gories, we're gonna malloc the new size and check
				*if it actually passed malloc
				*/
	if (t == NULL)
		return (NULL);
	size = new_size;       /*
				*we will end our upcoming loop when size = 0. Since
				*we cannot actually change the value of new_size,
				*we gotta set another changable variable to the same
				*value of new_size
				*/
	p = t;     /*this pointer will initialize our new memory space*/
	pptr = ptr;  /*
		      *this pointer will "dereference" our ptr void pointer so we can
		      *initialize t with it's elements
		      */
	while (size--)
		*p++ = *pptr++;
	free(ptr);  /*
		     *since we have no more use for ptr, we can free the memory for
		     *it
		     */
	return (t);
}
