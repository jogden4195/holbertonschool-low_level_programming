#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index n
 * of a dlistint_t linked list
 * @head: head of the linked list
 * @index: Index of the node we are trying to delete
 *
 * Return: 1 if success, -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *after, *target, *before;
	unsigned int i = 0;

	before = *head;
	if (before == NULL)
		return (-1);
	if (index == 0)
	{
		after = before->next;
		if (after)
			after->prev = NULL;
		free(*head);
		*head = after;
	}
	else
	{
		while (i < index - 1)
		{
			before = before->next;
			if (!before)
				return (-1);
			i++;
		}
		target = before->next;
		after = target->next;
		free(target);
		before->next = after;
		if (after)
			after->prev = before;
	}
	return (1);
}
