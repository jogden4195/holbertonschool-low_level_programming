#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table we are adding/updating
 * @key: the key of the element we are adding
 * @value: the value of the element we are adding
 *
 * Return: 1 if success, 0 if failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *new, *temp;

	if (key != '\0' && key != NULL && value != '\0' && value != NULL)
	{
		new = malloc(sizeof(hash_node_t));
		if (new)
		{
			i = key_index((const unsigned char *)key, ht->size);
			new->key = strdup(key);
			if (!new->key)
				return (0);
			new->value = strdup(value);
			if (!new->key)
				return (0);
			if (!(ht->array[i]))
			{
				ht->array[i] = new;
				new->next = NULL;
			}
			else
			{
				temp = ht->array[i];
				new->next = temp;
				ht->array[i] = new;
			}
			return (1);
		}
	}
	return (0);
}
