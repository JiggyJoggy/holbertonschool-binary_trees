#include "binary_trees.h"

/**
 * binary_tree_is_root - checks for node to see if its root
 * @node: node
 *
 * Return: node
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->parent)
		return (1);
	else
		return (0);
}
