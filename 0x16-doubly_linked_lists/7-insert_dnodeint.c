#include "lists.h"
/**
 * insert_dnodeint_at_index - insets a new node at a given
 * position
 * @h: head of the list
 * @idx: index that we are inserting new node
 * @n: number we are assigining to the new node
 *
 * Return: address of the new node or NULL if failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp, *next_after_new;
	unsigned int i = 0;

	if (h)
	{
		new = malloc(sizeof(dlistint_t));
		if (!new)
			return (NULL);
		new->n = n;
		temp = *h;
		if (idx == 0)
		{
			new->next = temp;
			if (temp)
				temp->prev = new;
			*h = new;
			return (new);
		}
		while (i < idx - 1)
		{
			temp = temp->next;
			if (!temp)
			{
				free(new);
				return (NULL);
			}
			i++;
		}
		next_after_new = temp->next;
		new->next = next_after_new;
		new->prev = temp;
		temp->next = new;
		if (next_after_new)
			next_after_new->prev = new;
		return (new);
	}
	return (NULL);
}
