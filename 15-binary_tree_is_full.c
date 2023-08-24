#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: binary tree
 *
 * Return: 0 if failed, else return binary tree
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (!tree)
		return (0);

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	if ((!left && !right) || (left && right))
		return (1);

	return (left * right);
}
