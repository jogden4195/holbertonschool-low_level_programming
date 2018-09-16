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
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;

	return (*head);
}
