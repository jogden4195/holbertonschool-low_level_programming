#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of
 * another node
 * @parent: pointer to the node to insert the right child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent)
	{
		new = malloc(sizeof(binary_tree_t));
		if (new)
		{
			new->parent = parent;
			new->n = value;
			new->left = NULL;
			if (parent->right)
			{
				new->right = parent->right;
				(parent->right)->parent = new;
			}
			else
				new->right = NULL;
			parent->right = new;
			return (new);
		}
	}
	return (NULL);
}
