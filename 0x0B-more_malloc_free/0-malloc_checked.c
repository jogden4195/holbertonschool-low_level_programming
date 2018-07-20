#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the amount of memory needed to be allocated
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *t;          /* Declare the pointer we will return */

	t = malloc(b);    /* Malloc b */
	if (t == NULL)    /* If malloc fails, exit with status 98 */
	{
		exit(98);
	}
	return (t);       /* Return t */
}
