#include "lists.h"
#include <stdio.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head of the list
 * @str: str that needs to go into new node
 *
 * Return: the address of the new element or NULL if failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *end_node;
	int i = 0;

	new_node = malloc(sizeof(head));
	if (new_node == NULL || !head)
		return (NULL);
	if (str == NULL)
	{
		new_node->str = NULL;
		new_node->len = 0;
	}
	else
	{
		new_node->str = strdup(str);
		while (str[i] != '\0')
			i++;
		new_node->len = i;
	}
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	end_node = *head;
	while (end_node->next != NULL)
		end_node = end_node->next;
	end_node->next = new_node;
	return (new_node);
}
