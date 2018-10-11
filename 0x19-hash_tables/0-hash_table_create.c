#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	if (size)
	{
		new = malloc(sizeof(hash_table_t));
		if (new)
		{
			new->size = size;
			new->array = malloc(sizeof(unsigned long int) * size);
			return (new);
		}
	}
	return (NULL);
}
