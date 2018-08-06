#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: the list we are printing out
 *
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
