#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table we are deleting
 *
 * Return: none
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t **array, *temp, *current;

	array = ht->array;
	while (i < ht->size)
	{
		current = array[i];
		while (current)
		{
			
			free(current->key);
			free(current->value);
			temp = current->next;
			free(current);
			current = temp;
		}
		i++;
	}
	free(array);
	free(ht);
}
