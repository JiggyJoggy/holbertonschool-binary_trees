#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: binary tree
 *
 * Return: 0 if failed, else return leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->right)
		right = binary_tree_leaves(tree->right);

	if (tree->left)
		left = binary_tree_leaves(tree->left);

	return (left + right);
}
