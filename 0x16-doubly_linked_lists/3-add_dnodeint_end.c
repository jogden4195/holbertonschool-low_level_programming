#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a
 * dlistint_t list
 * @head: first node in the list
 * @n: number we are assigning to new node
 *
 * Return: address of the new node or NULL if failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *next_node;

	new = malloc(sizeof(dlistint_t));
	if (!new || !head)
		return (NULL);
	new->n = n;
	if (!*head)
	{
		*head = new;
		return (new);
	}
	next_node = *head;
	while (next_node->next)
		next_node = next_node->next;
	next_node->next = new;
	new->prev = next_node;
	return (new);
}
