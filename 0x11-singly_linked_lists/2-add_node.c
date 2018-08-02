#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the head of the list
 * @str: str that needs to go into new node
 *
 * Return: the address of the new element or NULL if failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int i = 0;

	new_node = malloc(sizeof(head));
	if (new_node == NULL)
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
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
