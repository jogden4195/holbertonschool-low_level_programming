#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given
 * position
 * @head: first node in the list
 * @idx: index of the list where the new node should be added
 * @n: the number we are initializing new_node->n to
 *
 * Return: address of the new node or NULL if failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *next_node;
	listint_t *after_new;
	unsigned int i;

        new_node = malloc(sizeof(listint_t));
        if (new_node == NULL)
		return (NULL);
	next_node = *head;
	for (i = 0; i < idx - 1; i++)
	{
		next_node = next_node->next;
		if (next_node == NULL)
			return (NULL);
	}
	after_new = next_node->next;
	next_node->next = new_node;
	new_node->n = n;
	new_node->next = after_new;
	return (new_node);
} 
