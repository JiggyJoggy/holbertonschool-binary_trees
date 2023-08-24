#include "binary_trees.h"

/**
 * binary_tree_depth - depth of a node in a binary tree
 * @tree: binary tree
 *
 * Return: 0 if NULL, else return depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	if (tree->parent)
		depth = 1 + binary_tree_depth(tree->parent);

	return (depth);
}
