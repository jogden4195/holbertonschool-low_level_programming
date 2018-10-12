#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table we are printing out
 *
 * Returns: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0, flag = 0;
	hash_node_t **array, *temp;

	if (!ht)
		return;
	printf("{");
	array = ht->array;
	while (i < ht->size)
	{
		temp = array[i];
		while (temp)
		{
			if (flag)
				printf(", ");
			printf("'%s':'%s'", temp->key, temp->value);
			flag = 1;
			temp = temp->next;
		}
		i++;
	}
	printf("}\n");
}
