#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: the list we are ordering
 *
 * Return: none
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *store_i, *prior, *store_p;

	if (!list || !(*list))
		return;
	current = *list;
	if (current->prev == NULL && current->next == NULL)
		return;
	if (!(current->prev) && current->next)
		current = current->next;
	while (current)
	{
		store_i = current->next;
		prior = current->prev;
		while (prior)
		{
			store_p = prior->prev;
			if (current->n < prior->n)
			{
				if (current->next)
					(current->next)->prev = prior;
				prior->next = current->next;
				current->prev = prior->prev;
				current->next = prior;
				if (prior->prev)
					(prior->prev)->next = current;
				current->prev = prior->prev;
				prior->prev = current;
				if (!(current->prev))
					*list = current;
				print_list(*list);
			}
			prior = store_p;
		}
		current = store_i;
	}
}
