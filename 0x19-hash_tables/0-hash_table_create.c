#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *new;

	if (size)
	{
		new = malloc(sizeof(hash_table_t));
		if (new)
		{
			new->size = size;
			new->array = malloc(sizeof(hash_node_t *) * size);
			if (!new)
				return (NULL);
			while (i < size)
			{
				new->array[i] = 0;
				i++;
			}
			return (new);
		}
	}
	return (NULL);
}
