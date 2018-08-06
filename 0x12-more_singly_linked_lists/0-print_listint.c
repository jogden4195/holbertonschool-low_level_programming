#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: the list we are printing out
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%i\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
