#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of listint_t
 * linked list
 * @head: first node of the list
 * @index: index of the node
 *
 * Return: pointer to the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
