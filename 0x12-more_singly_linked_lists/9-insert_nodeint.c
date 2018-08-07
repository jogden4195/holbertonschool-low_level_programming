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
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0 && *head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	next_node = *head;
	while (i < idx - 1)
	{
		next_node = next_node->next;
		if (next_node == NULL)
		{
			free(new_node);
			return (NULL);
		}
		i++;
	}
	after_new = next_node->next;
	if (idx == 0)
		*head = new_node;
	else
		next_node->next = new_node;
	new_node->next = after_new;
	return (new_node);
}
