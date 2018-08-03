#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: first node in list
 *
 * Return: none
 */

void free_list(list_t *head)
{
	list_t *next_node;

	while (head != NULL)
	{
		next_node = head->next;
		free(head->str);
		free(head);
		head = next_node;
	}
}
