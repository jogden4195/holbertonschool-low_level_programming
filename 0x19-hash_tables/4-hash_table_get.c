#include "hash_tables.h"

/**
 * hash_table_get - gets the value of a key
 * @ht: hash table we are searching through
 * @key: the key of the value we are searching for
 *
 * Return: value of key or NULL if not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *temp;

	if (key != '\0' && key != NULL)
	{
		i = key_index((const unsigned char *)key, ht->size);
		if (ht->array[i])
		{
			temp = ht->array[i];
			while (temp)
			{
				if (strcmp(temp->key, key) == 0)
					return (temp->value);
				temp = temp->next;
			}
		}
	}
	return (NULL);
}
