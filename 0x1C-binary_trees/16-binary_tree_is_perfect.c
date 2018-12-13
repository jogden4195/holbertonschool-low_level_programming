#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 if it is not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int leaves, nodes, height, i, target = 1;

	if (!tree)
		return (0);
	height = binary_tree_height(tree);
	leaves = binary_tree_leaves(tree);
	nodes = binary_tree_size(tree);
	for (i = 0; i < height; i++)
		target = target * 2;
	if (leaves == target)
	{
		if (nodes == 2 * leaves - 1)
			return (1);
	}
	return (0);
}

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

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: int
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);
	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);
	if (!(tree->left) && !(tree->right))
		return (leaves + 1);
	else
		return (leaves);
}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: int
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
