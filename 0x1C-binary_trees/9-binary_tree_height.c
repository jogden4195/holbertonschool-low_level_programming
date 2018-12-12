#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: int
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight = 0, rheight = 0;

	if (!tree)
		return (0);
	if (tree->left)
		lheight = 1 + binary_tree_height(tree->left);
	if (tree->right)
		rheight = 1 + binary_tree_height(tree->right);
	if (lheight >= rheight)
		return (lheight);
	else
		return (rheight);
}
