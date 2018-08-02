#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t
 * list
 * @h: list we are going through
 *
 * Return: number of elements in list
 */

size_t list_len(const list_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
