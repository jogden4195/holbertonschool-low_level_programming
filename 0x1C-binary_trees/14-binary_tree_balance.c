#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance
 * factor
 *
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int lheight, rheight, balance = 0;

	if (!tree)
		return (0);
	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);
	balance = lheight - rheight;
	return (balance);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: int
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int lheight;
	int rheight;

	if (!tree)
		return (-1);
	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);
	if (lheight > rheight)
		return (lheight + 1);
	else
		return (rheight + 1);
}
