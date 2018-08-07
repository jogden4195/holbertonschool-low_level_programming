#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list
 * @head: first node of the list
 * @index: the index of the node we want to delete
 *
 * Return: 1 if success, -1 if failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *after_node;
	listint_t *target_node;
	listint_t *before_node;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	before_node = *head;
	if (index == 0)
	{
		after_node = (*head)->next;
		free(*head);
		*head = after_node;
		return (1);
	}
	while (i < index - 1)
	{
		before_node = before_node->next;
		if (before_node == NULL)
			return (-1);
		i++;
	}
	target_node = before_node->next;
	after_node = target_node->next;
	free(target_node);
	before_node->next = after_node;
	return (1);
}
