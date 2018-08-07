#include "lists.h"

/**
 * pop_listint - deletes the head node od a listint_t linked
 * list and returns the head node's data (n)
 * @head: first node of the list
 *
 * Return: the head node's data
 */

int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *new_head;

	if (*head == NULL)
		return (0);
	i = (*head)->n;
	new_head = (*head)->next;
	free(*head);
	*head = new_head;
	return (i);
}
