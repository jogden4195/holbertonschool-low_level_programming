#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t
 * @head: first node of the list
 * @n: the number we are initializing node->n to
 *
 * Return: address of the new elements or NULL if failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
