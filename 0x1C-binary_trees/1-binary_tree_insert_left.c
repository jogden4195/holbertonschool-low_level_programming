#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another
 * node
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent)
	{
		new = malloc(sizeof(binary_tree_t));
		if (new)
		{
			new->parent = parent;
			new->n = value;
			new->right = NULL;
			if (parent->left)
			{
				new->left = parent->left;
				(parent->left)->parent = new;
			}
			else
				new->left = NULL;
			parent->left = new;
			return (new);
		}
	}
	return (NULL);
}
