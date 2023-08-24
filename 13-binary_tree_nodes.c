#include "binary_trees.h"

/**
 * binary_tree_nodes - nodes with at least 1 child in a binary tree
 * @tree: binary tree
 *
 * Return: 0 if failed, else return counter
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;
	size_t counter = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		counter++;

	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);

	return (left + right + counter);
}
