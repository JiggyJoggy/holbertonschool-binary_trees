#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: binary tree
 *
 * Return: 0 if failed, else return if perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (!tree)
		return (0);

	left = binary_tree_is_perfect(tree->left);
	right = binary_tree_is_perfect(tree->right);

	if (left && right && binary_tree_height(tree->left)
	== binary_tree_height(tree->right))
		return (1);
	if (!left && !right)
		return (1);
	else
		return (0);
}

/**
 * binary_tree_height - binary tree height
 * @tree: binary tree
 *
 * Return: 0 if tree NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!tree)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
		return (left + 1);

	return (right + 1);
}
