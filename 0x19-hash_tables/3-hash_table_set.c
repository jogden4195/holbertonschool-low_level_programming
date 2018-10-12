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
	hash_node_t *new, *temp, *head;

	if (ht != NULL && key != NULL && value != NULL)
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
				printf("hello!");
				ht->array[i] = new;
				new->next = NULL;
			}
			else
			{
				head = ht->array[i];
				temp = head;
				printf("hi!");
				while (temp->next)
				{
					printf("hi");
					if (strcmp(temp->key, key) == 0)
					{
						printf("hi");
						free(new->key);
						free(new->value);
						free(new);
						free(temp->value);
						temp->value = strdup(value);
						printf("%s", temp->value);
						return (1);
					}
					temp = temp->next;
				}
				new->next = head;
				ht->array[i] = new;
			}
			return (1);
		}
	}
	return (0);
}
