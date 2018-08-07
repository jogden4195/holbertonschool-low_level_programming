#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: first node in the listint_t list
 * @n: number we are initializing new_node->n to
 *
 * Return: the address of the new element of NULL if failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *end_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || !head)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	end_node = *head;
	while (end_node->next != NULL)
		end_node = end_node->next;
	end_node->next = new_node;
	return (new_node);
}
