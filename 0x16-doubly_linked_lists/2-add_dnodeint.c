#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a
 * dlistint_t list
 * @head: first node of the list
 * @n: number we are assigning to our new node
 *
 * Return: address of the new element or NULL if failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
  dlistint_t *new, *old_head;

	new = malloc(sizeof(dlistint_t));
	if (new)
	{
		old_head = *head;
		new->n = n;
		new->next = old_head;
		old_head->prev = new;
		*head = new;
	}
	return (new);
}
