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
	unsigned long int i = 0;
	hash_node_t *new, *temp;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	new->key = strdup(key);
	new->value = strdup(value);
	if (!(ht->array[i]))
	{
		ht->array[i] = new;
		new->next = NULL;
	}
	else
	{
		temp = ht->array[i];
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
			{
				free(new->key);
				free(new->value);
				free(new);
				free(temp->value);
				temp->value = strdup(value);
				return (1);
			}
			temp = temp->next;
		}
		new->next = ht->array[i];
		ht->array[i] = new;
	}
	return (1);
}
